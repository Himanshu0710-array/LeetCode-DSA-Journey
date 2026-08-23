class Solution {
public:
    bool checkDivisibility(int n) {
        int c = n;
        int sum = 0;
        int pro = 1;
        while(n>0){
            int a = n%10;
            pro *= a;
            sum += a;
            n = n/10;
        }
        int x = sum + pro;
        if(c % x == 0){
            return true;
        }else{
            return false;
        }
    }
};