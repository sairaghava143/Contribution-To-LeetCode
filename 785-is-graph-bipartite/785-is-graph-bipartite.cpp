class Solution {
public:
    bool dfs(int i,vector<vector<int>>& graph,vector<int>&v,int color){
        v[i]=color;
         bool flag;
        for(auto &it:graph[i]){
            if(!v[it]){
               flag=dfs(it,graph,v,3-color);
                if(!flag)return flag;
            }else if(v[it]==v[i]){
                return false;
            }
            
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v(n,0);
         bool flag;
        for(int i=0;i<n;i++){
            if(!v[i]){
               flag=dfs(i,graph,v,1);
                if(!flag)return flag;
            }
        }
        return true;
    }
};