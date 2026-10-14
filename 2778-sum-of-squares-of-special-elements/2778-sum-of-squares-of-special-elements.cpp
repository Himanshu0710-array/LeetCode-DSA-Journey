class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int j = i+1;
            if(n%j == 0){
                int x = pow(nums[i],2);
                ans += x;
            }
        }
        return ans;
    }
};