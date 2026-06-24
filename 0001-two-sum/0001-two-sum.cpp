class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int a = target - nums[i];
            auto it = mpp.find(a);
            if(mpp.find(a) != mpp.end()){
                return {i,it->second};
            }
            mpp[nums[i]] = i;
        }
        
        // for(int i=0;i<nums.size();i++){
        //     int sum = 0;
        //     for(int j=i+1;j<nums.size();j++){
        //         sum = nums[i] + nums[j];
        //         if(sum == target){
        //             return{i,j};
        //         }
        //     }
        // }
        return {};
    }
};