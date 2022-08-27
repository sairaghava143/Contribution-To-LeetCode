class Solution {
public:
    void dfs( vector<vector<int>>&v, vector<vector<char>>&grid,int i,int j,int &n,int &m){
        if(i<0 || j<0 || i>=n || j>=m || v[i][j]==1 || grid[i][j]=='0'){
            return;
        }
        v[i][j]=1;
        dfs(v,grid,i-1,j,n,m);
        dfs(v,grid,i+1,j,n,m);
        dfs(v,grid,i,j-1,n,m);
        dfs(v,grid,i,j+1,n,m);

    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j] && grid[i][j]=='1'){
                    dfs(v,grid,i,j,n,m);
                    count++;
                }
            }
        }
        return count;
    }
};