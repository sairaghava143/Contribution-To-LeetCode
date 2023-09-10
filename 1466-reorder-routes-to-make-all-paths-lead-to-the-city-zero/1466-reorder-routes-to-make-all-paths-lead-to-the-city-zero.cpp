class Solution {
public:
    int dfs(vector<vector<int>>&al,vector<bool>&v,int i){
                int change=0;

        v[i]=true;
        for(auto &it:al[i]){
            if(!v[abs(it)]){
                
                change+=dfs(al,v,abs(it))+(it>0);
            }
        }
        return change;
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        //making adj list

        vector<vector<int>>al(n);
        for(vector<int>&it:connections){
            al[it[0]].push_back(it[1]);
            al[it[1]].push_back(-it[0]);

        }
     
        vector<bool>v(n);
        return dfs(al,v,0);
        
    }
};