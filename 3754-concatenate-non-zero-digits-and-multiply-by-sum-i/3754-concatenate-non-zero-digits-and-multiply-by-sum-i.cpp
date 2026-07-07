class Solution {
public:
    long long rev(long long &a){
        long long x = 0;
        while(a>0){
            long long y = a%10;
            x = x * 10 + y;
            a = a/10;
        }
        return x;
    }
    long long sumAndMultiply(int n) {
        long long a = 0;
        long long sum = 0;
        while(n>0){
            long long x = n%10;
            if(n%10 != 0){
                a = a*10 + x;
                sum += x;
            }
            n = n/10;
        }
        long long ans = rev(a);
        return sum * ans;
    }
};