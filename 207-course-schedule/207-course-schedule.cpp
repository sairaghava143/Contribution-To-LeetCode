class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>graph;
        vector<int>indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            int ai=prerequisites[i][0];
            int bi=prerequisites[i][1];
            graph[bi].push_back(ai);
            indegree[ai]++;
        }
        queue<int>q;
        int count=0;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
            
        }
        while(!q.empty()){
            int index=q.front();
            q.pop();
            count++;
            vector<int>children=graph[index];
            for(auto it:children){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        return count==numCourses;
    }
};