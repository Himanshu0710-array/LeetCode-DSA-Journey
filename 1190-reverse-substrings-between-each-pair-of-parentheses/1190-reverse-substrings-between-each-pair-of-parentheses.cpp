class Solution {
public:
    string reverseParentheses(string s) {
        string ans;
        stack<int> st;
        vector<pair<int,int>> a;
        int i=0;
        while(i<s.size()){
            if(s[i] == '('){
                st.push(ans.size());
            }
            else if(s[i] == ')'){
                a.push_back({st.top(),ans.size()-1});
                st.pop();
            }
            else{
                ans+= s[i];
            }
            i++;
        }
        for(int i=0;i<a.size();i++){
            int l = a[i].first;
            int r = a[i].second;
            reverse(ans.begin()+l,ans.begin()+r+1);
        }
        return ans;
    }
};