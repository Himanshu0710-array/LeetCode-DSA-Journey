class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int base = prices[0];
        int profit = 0;
        for(int i=1;i<n;i++){
            if(prices[i] < base){
                base = prices[i];
            }else{
                int a = prices[i] - base;
                profit += a;
                base = prices[i];
            }
        }
        return profit;
    }
};