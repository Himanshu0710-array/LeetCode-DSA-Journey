class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int dsum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            // int a = 0;
            while(nums[i]){
                int x = nums[i] % 10;
                dsum += x;
                nums[i] /= 10;
            }
        }
        return abs(dsum - sum);
    }
};