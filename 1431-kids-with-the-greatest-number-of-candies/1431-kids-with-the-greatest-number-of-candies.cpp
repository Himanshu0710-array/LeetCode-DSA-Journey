class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ans(n);
        int maxEle = *max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++){
            if((candies[i] + extraCandies) >= maxEle){
                ans[i] = true;
            }else{
                ans[i] = false;
            }
        }
        return ans;
    }
};