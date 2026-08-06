class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int i: nums){
            total += i;
        }
        int n = nums.size();
        int left = 0;
        for(int i=0;i<n;i++){
            if(total - left - nums[i] == left){
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};