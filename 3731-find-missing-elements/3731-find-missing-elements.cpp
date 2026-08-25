class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int maxi = nums[n-1];
        
        int j = mini;
        int i = 0;
        while(j<maxi && i<nums.size()){
            if(nums[i] != j){
                ans.push_back(j);
                j++;
            }else{
                i++;
                j++;
            }
        }
        return ans;
    }
};