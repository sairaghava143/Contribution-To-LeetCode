class Solution {
public:
    int findmax(vector<string>& strs, int m, int n,int index ,int &s, vector<vector<vector<int>>>&dp){
        if(index>=s)return 0;
        if(dp[m][n][index]!=-1)return dp[m][n][index];
        int countzeros=count(strs[index].begin(),strs[index].end(),'0');
        int countones=strs[index].size()-countzeros;
        
        if(m-countzeros>=0 && n-countones>=0){
            return dp[m][n][index]= max(1+findmax(strs,m-countzeros,n-countones,index+1,s,dp),findmax(strs,m,n,index+1,s,dp));
        }
        
        return dp[m][n][index]=findmax(strs,m,n,index+1,s,dp);

    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int s=strs.size();
        vector<vector<vector<int>>>dp(s+1,vector<vector<int>>(m+1,vector<int>(n+1,0)));
        // return findmax(strs,m,n,0,s,dp);
        
        for(int i=1;i<=s;i++){
            for(int j=0;j<=m;j++){
                for(int k=0;k<=n;k++){
                    int countzeros=count(strs[i-1].begin(),strs[i-1].end(),'0');
                     int countones=strs[i-1].size()-countzeros;
                    if(j-countzeros>=0 && k-countones>=0){
  dp[i][j][k]=max(1+dp[i-1][j-countzeros][k-countones],dp[i-1][j][k]);
                    }else{
                        dp[i][j][k]=dp[i-1][j][k];
                    }
                  
                }
            }
        }
        
return dp[s][m][n];
    }
};