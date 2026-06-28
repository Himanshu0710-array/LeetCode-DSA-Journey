class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        long long  sum = 0;
        int idx = 0;
        while(idx < k && mul > 0){
            sum += 1LL * nums[idx]* mul;
            idx++;
            mul--;
        }
        while(idx < k){
            sum += nums[idx];
            idx++;
        }
        return sum;
    }
};