class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 1;
        vector<char> res;
        for(int i=1;i<chars.size();i++){
            if(chars[i] == chars[i-1]){
                cnt++;
            }else{
                if(cnt == 1){
                    res.push_back(chars[i-1]);
                }else{
                    res.push_back(chars[i-1]);
                    string s = to_string(cnt);
                    for(char c : s) res.push_back(c);
                    cnt = 1;
                }
            }
        }
        if(cnt == 1){
            res.push_back(chars.back());
        }else{
            res.push_back(chars.back());
            string s = to_string(cnt);
            for(char c : s) res.push_back(c);
        }
        chars.clear();
        for(char c: res){
            chars.push_back(c);
        }
        return chars.size();
    }
};