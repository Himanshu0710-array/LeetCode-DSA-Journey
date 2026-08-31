class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0;
        int pos = 0;
        for(int i: nums){
            if(i>0){
                pos++;
            }if(i<0){
                neg++;
            }
        }
        return max(neg,pos);
    }
};