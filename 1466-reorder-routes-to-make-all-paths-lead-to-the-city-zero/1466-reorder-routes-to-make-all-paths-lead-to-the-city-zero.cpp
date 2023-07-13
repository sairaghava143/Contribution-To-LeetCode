class Solution {
public:
    int dfs(vector<vector<int>>&g,vector<bool>&v,int node){
        v[node]=true;
        int count=0;
        for(int i:g[node]){
            if(!v[abs(i)]){
                count+=(dfs(g,v,abs(i)))+(i>0);
            }
        }
        return count;
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        //using dfs approach directed graph
        
        vector<vector<int>>g(n);
    
        for( vector<int> &v:connections ){
            g[v[0]].push_back(v[1]);
            g[v[1]].push_back(-v[0]);
        }
        vector<bool>v(n);
        return dfs(g,v,0);
        
        
    }
};