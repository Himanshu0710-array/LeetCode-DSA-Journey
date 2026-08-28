#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string lexPalindromicPermutation(std::string s, std::string target) {
        int n = s.length();
        std::vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }

        // 1. Validate odd frequencies
        int oddCount = 0;
        char midChar = 0;
        for (int i = 0; i < 26; ++i) {
            if (count[i] % 2 != 0) {
                oddCount++;
                midChar = 'a' + i;
            }
        }
        if (oddCount > 1) return "";

        int halfLen = n / 2;
        
        // Helper to construct palindrome from first half
        auto buildPalindrome = [&](const std::string& h) {
            std::string rev = h;
            std::reverse(rev.begin(), rev.end());
            if (n % 2 != 0) return h + midChar + rev;
            return h + rev;
        };

        // 2. Try matching target prefix of length `i`, then placing a larger char at `i`
        for (int i = halfLen; i >= 0; --i) {
            std::vector<int> remCount = count;
            if (n % 2 != 0) remCount[midChar - 'a']--;

            bool possible = true;
            std::string half = "";

            // Match prefix target[0 ... i-1]
            for (int j = 0; j < i; ++j) {
                int c = target[j] - 'a';
                if (remCount[c] >= 2) {
                    remCount[c] -= 2;
                    half += target[j];
                } else {
                    possible = false;
                    break;
                }
            }

            if (!possible) continue;

            // If prefix matches exact half length, check if candidate > target
            if (i == halfLen) {
                std::string candidate = buildPalindrome(half);
                if (candidate > target) return candidate;
                continue;
            }

            // Make character at index `i` strictly greater than target[i]
            int startChar = target[i] - 'a' + 1;
            for (int c = startChar; c < 26; ++c) {
                if (remCount[c] >= 2) {
                    remCount[c] -= 2;
                    half += static_cast<char>('a' + c);

                    // Fill remaining half greedily with smallest available characters
                    for (int k = 0; k < 26; ++k) {
                        while (remCount[k] >= 2) {
                            half += static_cast<char>('a' + k);
                            remCount[k] -= 2;
                        }
                    }

                    std::string candidate = buildPalindrome(half);
                    if (candidate > target) return candidate;
                    break;
                }
            }
        }

        return "";
    }
};