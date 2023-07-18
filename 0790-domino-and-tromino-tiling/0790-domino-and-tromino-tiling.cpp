class Solution {

public:
    vector<int> dp;
    
    int tile(int n) {
        if (n <= 2) {
            return n;
        }
        if (n == 3) {
            return 5;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        dp[n] = (2 * tile(n-1) % (int)(1e9+7) + tile(n-3) % (int)(1e9+7)) % (int)(1e9+7);
        return dp[n];
    }
    
    int numTilings(int n) {
        dp.resize(n+1, -1);
        return tile(n);
    }
};
