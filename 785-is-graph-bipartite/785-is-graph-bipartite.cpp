class Solution {
public:
    bool bfs(int i,vector<int>&v,vector<vector<int>>& graph){
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            for(auto &it:graph[node]){
                if(v[it]==-1){
                    v[it]=1-v[node];
                    q.push(it);
                }else if(v[it]==v[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        ///bfs
        int n=graph.size();
        vector<int>v(n,-1);
        for(int i=0;i<n;i++){
            if(v[i]==-1){
                if(!bfs(i,v,graph)){
                    return false;
                }
            }
        }
        return true;
    }
};