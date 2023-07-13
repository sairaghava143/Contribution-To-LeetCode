class Solution {
public:
    void bfs(int node,vector<bool>&v,vector<vector<int>>& isConnected){
        v[node]=true;
        queue<int>q;
        q.push(node);
        while(!q.empty()){
            node=q.front();
            q.pop();
            for(int i=0;i<isConnected.size();i++){
                if(!v[i] && isConnected[node][i]){
                    v[i]=1;
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        //practice bfs approach
        int n=isConnected.size();
        vector<bool>v(n,false);
        int nc=0;
        for(int i=0;i<n;i++){
            if(!v[i]){
                nc++;
                bfs(i,v,isConnected);
            }
        }
        return nc;
        
    }
};