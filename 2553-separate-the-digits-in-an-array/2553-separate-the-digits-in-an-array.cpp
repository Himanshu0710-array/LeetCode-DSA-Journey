class Solution {
public:
    void sep(int n,vector<int>& ans){
        vector<int> temp;
        while(n>0){
            int a = n%10;
            n /= 10;
            temp.push_back(a);
        }
        int m = temp.size();
        for(int i=m-1;i>=0;i--){
            ans.push_back(temp[i]);
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i: nums){
            sep(i,ans);
        }
        return ans;
    }
};