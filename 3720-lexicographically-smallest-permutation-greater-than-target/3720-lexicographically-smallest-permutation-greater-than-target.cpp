class Solution {
public:
    string res;
    bool solve(string s , string t, vector<int> &cnt,string &ans,bool greater, int i){
        if(i==t.size()){
            if(greater){
                res = ans;
                return true;
            }
            return false; 
        }
        for(char c='a';c<='z';c++){
            if(cnt[c-'a'] == 0){
                continue;
            }
            if(!greater && c < t[i])
                continue;
            ans.push_back(c);
            cnt[c-'a']--;
            bool isGreater = greater || c > t[i];
            if(solve(s,t,cnt,ans,isGreater,i+1)){
                return true;
            }

            ans.pop_back();
            cnt[c-'a']++;
        }
        return false;
    }
    string lexGreaterPermutation(string s, string t) {
       vector<int> cnt(26);
        for(char &c: s){
            cnt[c-'a']++;
        }
        string ans;
        if(solve(s,t,cnt,ans,false,0)){
            return res;
        }
        return "";
    }
};