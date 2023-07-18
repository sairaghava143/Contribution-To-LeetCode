class Solution {
public:
    //logic 
    //mincost[i]=cost[i]+min(mincost(i-1),mincost(i-2));
    //base cases
    //mincost(0)=cost(0);
    //mincost(1)=cost(1);
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));
    }
    int mincost(vector<int>&cost,int n,vector<int>&dp){
        if(n<0)return 0;
        if(n==0 || n==1)return cost[n];
        if(dp[n]!=-1)return dp[n];
        
        return dp[n]=cost[n]+min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));
    }
};