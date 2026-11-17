class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        int i=0;
        int j = 1;
        if(!nums.empty()){
            arr.push_back(nums[0]);
        }
        while(i<nums.size()-1){
            if(nums[i] == nums[j]){
                if(j+1 < nums.size())
                    j++;
                else{
                    break;
                }
            }else{
                arr.push_back(nums[j]);
                i = j;
                j++;
            }
        }
        nums.clear();
        for(int i: arr){
            nums.push_back(i);
        }
        return arr.size();
    }
};