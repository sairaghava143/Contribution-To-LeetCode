class Solution {
public:
    int uniquePaths(int m, int n) {
        ///recurrsion
        // if(m==1 ||n==1){
        //     return 1;
        // }
        // return uniquePaths(m-1,n)+uniquePaths(m,n-1);
        
        
        //dp approach
//         int dp[m][n];
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(i==0||j==0){
//                     dp[i][j]=1;
//                 }else{
//                     int down=dp[i-1][j];
//                     int right=dp[i][j-1];
//                     dp[i][j]=down+right;
//                 }
//             }
//         }
//         return dp[m-1][n-1];
        
        
        //mathematical appraoch
        
        long long ans=1;
        for(int i=n;i<=n+m-2;i++){
            ans*=i;
            ans/=(i-n+1);
        }
        return int(ans);
    }
};