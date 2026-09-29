class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        vector<int> f(26);
        int cnt = 1;
        for(char c: s){
            int a =abs( c-'z' ) + 1;
            sum += a * cnt;
            cnt++;
        }
    return sum;
    }
};