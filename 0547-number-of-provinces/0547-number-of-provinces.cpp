class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,int i,vector<int>&v){
        v[i]=1;
        for(int j=0;j<v.size();j++){
            if(i!=j && !v[j] && isConnected[i][j]){
                dfs(isConnected,j,v);
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
       
        vector<int>v(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!v[i]){
                dfs(isConnected,i,v);
                count++;
                
            }
        }
        return count;
    }
};