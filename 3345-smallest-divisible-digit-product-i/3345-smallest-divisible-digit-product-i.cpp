class Solution {
public:
    bool help(int n, int t){
        int pro = 1;
        while(n){
            int a = n % 10;
            pro *= a;
            n = n/10;
        }
        if(pro % t == 0){
            return true;
        }else{
            return false;
        }
    }
    int smallestNumber(int n, int t) {
        int i;
        for(i=n;i<=100;i++){
            if(help(i,t)){
                break;
            }
        }
        return i;
    }
};