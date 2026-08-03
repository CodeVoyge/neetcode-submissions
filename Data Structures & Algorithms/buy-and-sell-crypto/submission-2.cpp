class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int n = prices.size();
        int maxProfit = 0;

        // check every pair of (buy, sell)
        for (int i = 0; i < n; i++) {          // buy day
            for (int j = i + 1; j < n; j++) {  // sell day (must be after buy day)
                int profit = prices[j] - prices[i];
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }
        return maxProfit;
    }
};