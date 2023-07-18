class Solution {
public:
// vector<long long>dp;

//     int tile(int n){
        
//         if(n<=3)return dp[n];
//         if(dp[n]!=-1)return dp[n];
//         return dp[n]=(2*tile(n-1)+tile(n-3))%(int)(1e9+7);
//     }
//     int numTilings(int n) {
   
//         dp.resize(1001,-1);
//                 dp[0]=0,dp[1]=1,dp[2]=2,dp[3]=5;

//         return tile(n);
        
//     }
    int numTilings(int n) {
    vector<long long> dp(1001, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
        
    for (int i = 3; i <= n; i++) {
        dp[i] = (2 * dp[i-1] + dp[i-3]) % (int)(1e9 + 7);
    }
    return dp[n];
}
};