class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp.insert({nums[i],i});
        }
        int i = 1;
        while(i<=nums.size()){
            int a = k*i;
            if(mpp.find(a) != mpp.end()){
                i++;
            }else{
                return i * k;
                break;
            }
        }
        return i * k;
    }
};