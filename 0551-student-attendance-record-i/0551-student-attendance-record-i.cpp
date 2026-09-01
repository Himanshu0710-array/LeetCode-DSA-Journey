class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        int l = 0;
        int maxi = -1;
        bool x = false;
        for(char c: s){
            if(c == 'L'){
                x = true;
                l++;
            }else if(c == 'A'){
                a++;
                x = false;
                l = 0;
            }else{
                l = 0;
                x = false;
            }
            maxi = max(maxi,l);
        }
        if(a>=2 || maxi>=3){
            return false;
        }
        return true;
    }
};