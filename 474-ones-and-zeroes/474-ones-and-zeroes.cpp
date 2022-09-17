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
        vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(s+1,-1)));
        return findmax(strs,m,n,0,s,dp);
    }
};