class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = -1;
        vector<int> ma;
        vector<int> mi;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
            ma.push_back(maxi);
        }
        for(int i=n-1;i>=0;i--){
            mini = min(mini,nums[i]);
            mi.push_back(mini);
        }
        reverse(mi.begin(),mi.end());
        for(int i=0;i<ma.size();i++){
            int a = ma[i] - mi[i];
            if(a <=k){
                return i;
            }
        }
        return ans;
    }
};