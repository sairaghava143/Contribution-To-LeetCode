class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //topological sort
        //create graph
        unordered_map<int,vector<int>>graph;
        vector<int>indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            int ai=prerequisites[i][0];
            int bi=prerequisites[i][1];
            graph[bi].push_back(ai);
            indegree[ai]++;
        }
        
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            vector<int>children=graph[node];
            for(auto it:children){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);;
                }
            }
        }
        return count==numCourses;
        
    }
};