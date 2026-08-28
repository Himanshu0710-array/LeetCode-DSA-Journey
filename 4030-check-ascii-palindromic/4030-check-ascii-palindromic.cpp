class Solution {
public:
    bool isPalindromic(string s) {
        string ans;
        for(char c: s){
            int a = c;
            bitset<8>b(a);
            string x = b.to_string();
            ans = ans+x;
        }
        int left = 0;
        int right = ans.size()-1;
        while(left <= right){
            if(ans[left] != ans[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};