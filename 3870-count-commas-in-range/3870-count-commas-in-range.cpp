class Solution {
public:
    int countCommas(int n) {
        if(n<4) return 0;
        int cnt = 0;
        for(int i=1000;i<=n;i++){
            cnt++;
        }
        return cnt;
    }
};