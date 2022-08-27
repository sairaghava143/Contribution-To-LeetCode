class Solution {
public:
    bool dfs(vector<vector<int>> &graph,vector<int> &visited,int i,int colour,int par){
        visited[i] = colour;
        for(auto &x : graph[i]){
            if(!visited[x]){
                visited[x] = 3-colour;
               int  y = dfs(graph,visited,x,3-colour,i);
                if(y==false){
                    return false;
                }
            }
            else if(x!=par && visited[x] == visited[i]){
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
            flag = flag && dfs(graph,visited,i,1,-1);
        }
        return flag;
    }
};