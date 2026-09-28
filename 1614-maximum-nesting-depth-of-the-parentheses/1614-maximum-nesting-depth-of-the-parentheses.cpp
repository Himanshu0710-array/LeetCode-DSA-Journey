class Solution {
public:
    int maxDepth(string s) {
        int maxi = -1;
        int cnt = 0;
        for(char c: s){
            if(c=='('){
                cnt++;
            }else if(c == ')'){
                cnt -= 1;
            }
            maxi = max(cnt,maxi);
        }
        return maxi;
    }
};