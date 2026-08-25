class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i: nums){
            mpp[i]++;
        }
        int cnt1 = 0;
        int cnt2 = 0;
        int a = nums[0];
        int b = nums[n-1];
        int maxi = -1;
        for(int i=0;i<n;i++){
            if(nums[i] == a){
                cnt1++;
            }else if(nums[i] == b){
                cnt2++;
            }
        }
        for(auto &it: mpp){
            if(it.second == 1){
                maxi = max(maxi,it.first);
            }
        }
        // maxi = max(maxi,a);
        if(k == 1 && a!=b){
            return maxi;
        }
        if(k == nums.size()){
            int a = INT_MIN;
            for(int i: nums){
                a = max(a,i);
            }
            return a;
        }else if(k==1 && a == b && n >2){
            return maxi;
        }else if(k == nums.size() && a == b){
            return a;
        }
        else if(k>nums.size()){
            return -1;
        }
        else{
            if(cnt1 == 1 && cnt2 == 1){
                return max(a,b);
            }else if(cnt1 == cnt2 && cnt1 >1 && cnt2 >1){
                return -1;
            }else if(cnt1 ==1 && cnt2 >1){
                return a;
            }else if(cnt1 >1 && cnt2 ==1){
                return b;
            }
        }
        return -1;
    }
};