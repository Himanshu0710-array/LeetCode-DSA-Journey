class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ans(n);
        int n = nums.size();
        vector<int> a(n);
        vector<int> b(n);
        int pre  = 1;
        int las = 1;
        a[0] = 1;
        b[n-1] = 1;
        for(int i=0;i<n-1;i++){
            pre = pre*nums[i];
            a[i+1] = pre;
        }
        for(int i=n-1;i>=1;i--){
            las = las*nums[i];
            b[i-1] = las;
        }
        for(int i=0;i<n;i++){
            nums[i]  = a[i] * b[i];
        }
        return nums;

    }
};