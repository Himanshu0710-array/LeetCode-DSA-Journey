class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        int ans = 0;
        int even = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2 != 0) continue;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                for(int k=0;k<n;k++){
                    if(k==i || k==j || nums[k] == 0) continue;
                    int digit = nums[k]*100 + nums[j] * 10 + nums[i];
                    st.insert(digit);
                }
            }
        }
        return st.size();
    }
};