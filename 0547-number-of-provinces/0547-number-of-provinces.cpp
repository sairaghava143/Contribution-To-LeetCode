class Solution {
public:
    void bfs(vector<bool>&v,int node,vector<vector<int>>&isConnected){
        queue<int>q;
        q.push(node);
        v[node]=true;
        while(!q.empty()){
         node=q.front();
            q.pop();
            for(int i=0;i<isConnected.size();i++){
                if(isConnected[node][i]&&!v[i]){
                    v[i]=1;
                    q.push(i);
                    
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        //bfs approach
        int n=isConnected.size();
        vector<bool>v(n,false);
        int nc=0;
        for(int i=0;i<n;i++){
            if(!v[i]){
                nc++;
                bfs(v,i,isConnected);
            }
        }
        return nc;
    }
};