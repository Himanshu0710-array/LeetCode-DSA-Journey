class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int open = 0;
        int close = 0;
        for(char c: s){
            if(c=='('){
                open++;
                st.push(c);
            }else{
                if(!st.empty()){
                    open--;
                    st.pop();
                }else{
                    close++;
                }
            }
        }
        return open+close;
    }
};