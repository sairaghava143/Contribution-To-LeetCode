class Solution {
public:
    int lcs(string &text1,int i,int &n,string &text2,int j,int &m){
        if(i>=n || j>=m){
            return 0;
        }
        //match 
        if(text1[i]==text2[j]){
            return 1+lcs(text1,i+1,n,text2,j+1,m);
        }
        //mismatch
        
        return max(lcs(text1,i,n,text2,j+1,m),lcs(text1,i+1,n,text2,j,m));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(),m=text2.size();
        // return lcs(text1,0,n,text2,0,m);
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }else if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                
            }
        }
        return dp[n][m];
    }
};