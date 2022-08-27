class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        ///create graph
        unordered_map<int,vector<int>>graph;
        
        vector<int>indegree(n);
        for(auto it:pre){
            int ai=it[0];
            int bi=it[1];
            graph[bi].push_back(ai);
            indegree[ai]++;
        }
        queue<int>q;
        int count=0;
for(int i=0;i<n;i++){
    if(indegree[i]==0){
        q.push(i);
    }
}
        while(!q.empty()){
            int index=q.front();
            q.pop();
            count++;
           vector<int>children=graph[index];
            for(int i:children){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        }
        return count==n;
    }
};