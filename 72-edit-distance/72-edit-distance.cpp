class Solution {
public:
    vector<vector<int>>dp;
    int mind(string word1,int n, string word2,int m){
        if(n<=0)return m;
                if(m<=0)return n;
if(dp[n][m]!=-1)return dp[n][m];
        
        if(word1[n-1]==word2[m-1]){
            return dp[n][m]= mind(word1,n-1,word2,m-1);
        }
            int insert=mind(word1,n,word2,m-1);
            int del=mind(word1,n-1,word2,m);
            int replace=mind(word1,n-1,word2,m-1);
    return dp[n][m]=  1+min({insert,del,replace});
        
        
    }
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
                dp.resize(n+1,vector<int>(m+1,-1));
        return mind(word1,n,word2,m);
        
    }
};