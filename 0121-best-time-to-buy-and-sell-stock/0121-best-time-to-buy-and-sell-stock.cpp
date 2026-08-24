class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int x = prices[0];
        for(int i=1;i<n;i++){
            if(prices[i] < x){
                x = prices[i];
            }else{
                int a = prices[i] - x;
                profit = max(profit,a);
            }
        }
        return profit;
    }
};