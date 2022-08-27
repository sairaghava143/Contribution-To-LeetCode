class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int>&v,int i,int color){
        v[i]=color;
        bool flag=true;
        for(auto &it:graph[i]){
            if(!v[it]){
                flag=flag&&dfs(graph,v,it,3-color);
            }else if(v[it]==v[i]){
                    return false;
                }
            
        }
        return flag;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v(n,0);
        bool flag=true;
        for(int i=0;i<n;i++){
            if(!v[i]){
                            flag=flag && dfs(graph,v,i,1);
if(!flag)return flag;
            }
        }
        return flag;
    }
};