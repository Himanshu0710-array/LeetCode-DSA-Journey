class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        pair<int,int> maxi = {INT_MIN,-1};
        pair<int,int> mini = {INT_MAX,-1};
        for(int i=0;i<n;i++){
            if(nums[i] > maxi.first){
                maxi.first = nums[i];
                maxi.second = i;
            }if(nums[i] < mini.first){
                mini.first = nums[i];
                mini.second = i;
            }
        }
        int l = maxi.second;
        int r = mini.second;
        int x = min(l+1,n-l);
        int y = min(r+1,n-r);
        return min({x+y, max(l,r)+1, n-min(l,r)});
    }
};