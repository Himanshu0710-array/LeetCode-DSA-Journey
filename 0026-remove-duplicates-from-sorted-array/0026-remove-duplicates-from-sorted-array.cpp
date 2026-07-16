class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        while(j<n){
            if(nums[i] == nums[j]){
                // i++;
                j++;
            }else {
                i++;
                swap(nums[j],nums[i]);
                j++; 
            }
        }
        return i+1;
    }
};