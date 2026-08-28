class Solution {
public:
    string generateTag(string s) {
        for(char &c: s){
            c = tolower(c);
        }
        int n = s.size();
        int i = 0;
        string ans="#";
        while(i < n && s[i] == ' ')
            i++;

        if(i == n)
            return ans;

        ans.push_back(s[i++]);
        string z;
        while(i<n){
            if(s[i] == ' '){
                ans += z;
                z.clear();

                // Skip all spaces
                while(i < n && s[i] == ' ') i++;

                if(i < n){
                    ans.push_back(toupper(s[i]));
                    i++;
                }
            }else if(s[i] >= 'a' && s[i] <='z'){
                z.push_back(s[i]);
                i++;
            }else{
                i++;
            }
        }
        ans += z;
        if(ans.size() > 100){
            while(ans.size() > 100){
                ans.pop_back();
            }
        }
        return ans;
    }
};