class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
    int n = prices.size();
    if (n == 0) return 0;
    vector<int> dp(n);
    int minPrice = prices[0];
    for (int i = 1; i < n; i++) {
        minPrice = min(minPrice, prices[i]);
        dp[i] = max(dp[i - 1], prices[i] - minPrice);
    }
    return dp[n - 1];
}

    
};