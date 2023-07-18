class Solution {
public:
    int numTilings(int n) {
        //dp approach bottom up
        //logic dp[i]=2*dp[i-1]+dp[i-3];
        vector<long long>dp(1001,-1);
        dp[0]=0,dp[1]=1,dp[2]=2,dp[3]=5;
        if(n<=3)return dp[n];
        for(int i=4;i<=n;i++){
            dp[i]=(2*dp[i-1]+dp[i-3])%(int)(1e9+7);
        }
        return dp[n];
    }
};