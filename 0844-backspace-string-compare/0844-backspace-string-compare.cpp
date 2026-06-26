class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st2;
        for(char i: s){
            if(i == '#' && !st.empty()){
                st.pop();
            }else if(i!= '#'){
                st.push(i);
            }
        }
        for(char i: t){
            if(i == '#' && !st2.empty()){
                st2.pop();
            }
            else if(i!= '#'){
                st2.push(i);
            }
        }
        while(!st.empty() && !st2.empty()){
            if(st.top() != st2.top()){
                return false;
            }
            st.pop();
            st2.pop();
        }
        return st.empty() && st2.empty();
    }
};