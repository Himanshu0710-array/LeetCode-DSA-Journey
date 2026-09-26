class Solution {
public:
    string evaluate(string s, vector<vector<string>>& nums) {
        unordered_map<string,string> mp;
        string ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i][0]] = nums[i][1];
        }
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                string x;
                string rep;
                int j = i+1;
                while(j<s.size() && s[j] != ')'){
                    x += s[j];
                    j++;
                }
                if(mp.find(x) != mp.end()){
                    rep = mp[x];
                        for(char c: rep){
                        ans += c;
                    }
                }else{
                    ans += '?';
                }
                i = j;
            }
            else{
                ans+= s[i];
            }
        }
        return ans;
    }
};