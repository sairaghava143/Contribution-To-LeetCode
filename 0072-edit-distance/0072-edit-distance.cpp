class Solution {
public:
    vector<vector<int>>dp;
    int minDistance(string word1, string word2) {
        int m=word1.size(),n=word2.size();
        dp.resize(m+1,vector<int>(n+1,-1));
        return minD(word1,word2,m,n);
    }
    int minD(string &w1,string &w2,int i,int j){
        if(i==0){
            return j;
        }
        if(j==0){
            return i;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(w1[i-1]==w2[j-1]){
            return dp[i][j]=minD(w1,w2,i-1,j-1);
        }else{
            int replace=minD(w1,w2,i-1,j-1);
            int insert=minD(w1,w2,i,j-1);
            int del=minD(w1,w2,i-1,j);
            return dp[i][j]=1+min({replace,insert,del});
        }
    }
};