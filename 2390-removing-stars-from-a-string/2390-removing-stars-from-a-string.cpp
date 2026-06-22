class Solution {
public:
    string removeStars(string s) {
        // string ans="";
        stack<char> st;
        for(char c: s){
            if(c!= '*'){
                st.push(c);
            }else{
                st.pop();
            }
        }
        string a = "";
        while(!st.empty()){
            a+=st.top();
            st.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};