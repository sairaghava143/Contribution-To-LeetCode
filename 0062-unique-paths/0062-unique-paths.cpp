class Solution {
public:
    //memo practice
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return path(m-1,n-1,dp);
    }
    int path(int i,int j,vector<vector<int>>&dp){
        if(i==0 || j==0)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=path(i-1,j,dp)+path(i,j-1,dp);
    }
};