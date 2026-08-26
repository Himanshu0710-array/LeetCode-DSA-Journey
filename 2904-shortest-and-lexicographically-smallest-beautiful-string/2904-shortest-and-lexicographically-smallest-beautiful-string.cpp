class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> ans;
        int n = s.size();
        int left = 0;
        int right = 0;
        int cnt = 0;
        string res;
        while(right < n){
            if(s[right] == '1'){
                cnt++;
            }
            while(cnt > k || (cnt == k && s[left] == '0')){
                if(s[left] == '1'){
                    cnt--;
                }
                left++;
            }if(cnt == k){
                string a = s.substr(left,right-left+1);
                ans.push_back(a);
            }
            right++;
        }
        
        if(ans.empty()){
            return "";
        }
        sort(ans.begin(), ans.end(), [](const string& a, const string& b) {
            if (a.size() != b.size()) {
                return a.size() < b.size();
            }
            return a < b;
        });

        return ans[0];
    }
};