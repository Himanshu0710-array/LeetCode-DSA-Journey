class Solution {
public:
    int titleToNumber(string s) {
        long long ans = 0;
        long long x = 1;
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            int p = s[i] - 'A';
            p += 1;
            ans += x * p;
            x *= 26;
        }
        return (int)ans;
    }
};
