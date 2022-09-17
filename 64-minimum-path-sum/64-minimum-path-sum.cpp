class Solution {
public:
//     vector<vector<int>>dp;
//     int minpath(vector<vector<int>>& grid,int m,int n){
//         if(m<=0 && n <=0)return grid[m][n];
//         if(dp[m][n]!=-1)return dp[m][n];
//         int l=INT_MAX,r=INT_MAX;
//         if(m>0){
//             l=grid[m][n]+minpath(grid,m-1,n);
//         }
//          if(n>0){
//             r=grid[m][n]+minpath(grid,m,n-1);
//         }
        
//         return dp[m][n]= min(l,r);
//     }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        // dp.resize(m+1,vector<int>(n+1,-1));
        // return minpath(grid,m-1,n-1);
        vector<vector<int>>dp(m,vector<int>(n,0));
        dp[0][0]=grid[0][0];
        for(int i=1;i<m;i++){
            dp[i][0]=grid[i][0]+dp[i-1][0];
        }
         for(int i=1;i<n;i++){
            dp[0][i]=grid[0][i]+dp[0][i-1];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
            
        }
        return dp[m-1][n-1];
    }
};