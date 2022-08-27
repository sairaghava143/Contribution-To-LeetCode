class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>>graph(n);
        vector<int>indegree(n,0),bfs;
        for(auto it:pre){
            graph[it[1]].push_back(it[0]);
            indegree[it[0]]++;
        }
        for(int i=0;i<n;i++){
            if(!indegree[i]){
                bfs.push_back(i);
            }
        }
        
        for(int i=0;i<bfs.size();i++ ){
            for(auto j:graph[bfs[i]]){
                if(--indegree[j]==0){
                    bfs.push_back(j);
                }
            }
        }
        return bfs.size()==n;
    }
};