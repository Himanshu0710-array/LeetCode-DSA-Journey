class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> arr;
        int n = digits.size();
        int a = digits[n-1];
        if(a < 9){ 
            digits[n-1] += 1;
            for(int i: digits){
                arr.push_back(i);
            }
        }else{
            int i=n-1;
            while(i>0){
                if(digits[i] < 9){
                    digits[i] += 1;
                    break;
                }
                else if(digits[i] == 9){
                    digits[i] = 0;
                    i--;
                }
            }
            if(i==0){
                if(digits[0] == 9){
                    digits[i] = 0;
                    arr.push_back(1);
                }else{
                    digits[i] += 1;
                }
            }
            
            for(int i: digits){
                arr.push_back(i);
            }
        }
        return arr;
    }
};