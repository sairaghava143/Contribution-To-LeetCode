class Solution {
public:
    void dfs(vector<int>adjlist[],int i,vector<int>&v){
        v[i]=1;
        for(auto &it:adjlist[i]){
            if(!v[it]){
                v[it]=1;
                dfs(adjlist,it,v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adjlist[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adjlist[i].push_back(j);
                }
            }
        }
        vector<int>v(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!v[i]){
                dfs(adjlist,i,v);
                count++;
                
            }
        }
        return count;
    }
};