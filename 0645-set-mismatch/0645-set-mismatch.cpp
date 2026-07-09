class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        int n = nums.size();
        vector<int> arr(n+1);
        for(int i: nums){
            arr[i]++;
        }
        for(int i=1;i<=n;i++){
            if(arr[i] == 2 && arr[i] != 0){
                ans[0] = i;
            }
            else if(arr[i] == 0){
                ans[1] = i;
            }
        }
        return ans;
    }
};