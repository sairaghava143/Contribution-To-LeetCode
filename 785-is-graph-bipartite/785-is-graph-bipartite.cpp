class Solution {
public:
    bool dfs(vector<vector<int>> &graph,vector<int> &visited,int i,int colour){
        visited[i] = colour;
        for(auto &x : graph[i]){
            if(!visited[x]){
               int  y = dfs(graph,visited,x,3-colour);
                if(y==false){
                    return false;
                }
            }
            else if(visited[x] == visited[i]){
              return false;  
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visited(n,0);
        bool flag = true;
        for(int i=0;i < n;i++){
            if(!visited[i])
            flag = flag && dfs(graph,visited,i,1);
        }
        return flag;
    }
};