class Solution {
public:
    int lcs(string &t1, string &t2,vector<vector<int>>&dp,int i,int j){
        if(i==0 || j==0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(t1[i-1]==t2[j-1]){
            return dp[i][j]=lcs(t1,t2,dp,i-1,j-1)+1;
        }else{
            return dp[i][j]=max(lcs(t1,t2,dp,i-1,j),lcs(t1,t2,dp,i,j-1));
        }
    }
    int longestCommonSubsequence(string t1, string t2) {
        int m=t1.size(),n=t2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return lcs(t1,t2,dp,m,n);
    }
};