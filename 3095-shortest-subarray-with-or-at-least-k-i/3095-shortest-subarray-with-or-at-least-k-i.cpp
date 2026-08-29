class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        int sum = 0;
        int cnt = nums.size() + 1;
        for(int i=0;i<nums.size();i++){
            int x = 0;
            for(int j=i;j<nums.size();j++){
                x = x | nums[j];
                if(x >= k){
                    sum = x;
                    cnt = min(cnt,j-i+1);
                    break;
                }
            }
        }
        if(sum >= k)
        return cnt;
       
       return -1;
    }
};

