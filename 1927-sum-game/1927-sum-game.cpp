class Solution {
public:
    bool sumGame(string num) {
        // int sum = 0;
        int n = num.size();
        int left = 0;
        int right = 0;
        int lsum = 0;
        int rsum = 0;
        for(int i=0;i<n/2;i++){
            if(num[i] == '?'){
                left++;
            }else{
                int a = num[i] - '0';
                lsum += a;
            }
        }
        for(int i=n/2;i<n;i++){
            if(num[i] == '?'){
                right++;
            }else{
                int a = num[i] - '0';
                rsum += a;
            }
        }
        if((left + right ) % 2){
            return true;
        }
        return (lsum-rsum) != 9*(right-left)/2;
    }
};