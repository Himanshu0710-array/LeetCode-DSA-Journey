class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        vector<int> cnt(26);
        int sum = 0;
        int left = 0;
        int right = 0;
        int maxi = -1;
        bool flag = true;
        while(right < n){
            cnt[s[right] - 'a']++;
            for(int i = 0; i < 26; i++) {
                if(cnt[i] > 2) {
                    flag = false;
                    break;
                }
            }
            while(!flag){
                cnt[s[left] - 'a']--;
                left++;
                flag = true;
                for(int i = 0; i < 26; i++) {
                    if(cnt[i] > 2) {
                        flag = false;
                        break;
                    }
                }
            }
            int len = right - left + 1;
            maxi = max(maxi,len);
            right++;
        }
        return maxi;
    }
};
