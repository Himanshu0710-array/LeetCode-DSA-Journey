class Solution {
public:
    string removeDuplicates(string s) {
       stack<char> st;
        for(char c: s){
            if(!st.empty() && st.top() == c){
                st.pop();
            }else{
                st.push(c);
            }
        }
        string ans;
        while(!st.empty()){
            char a = st.top();
            st.pop();
            ans.push_back(a);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};