class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // bfs approach
        int m=grid.size(),n=grid[0].size();
        int fo=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2)q.push({i,j});
                if(grid[i][j]==1)fo++;
            }
        }
        if(fo==0)return 0;
        if(q.empty())return -1;
        
        vector<pair<int,int>>dirs={{1,0},{-1,0},{0,1},{0,-1}};
        int time=-1;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                auto it=q.front();
                q.pop();
                for(auto dir:dirs){
                    int i=it.first+dir.first,j=it.second+dir.second;
                    if(i>=0 && i<m && j>=0 && j<grid[i].size() && grid[i][j]==1){
                        fo--;
                        grid[i][j]=2;
                        q.push({i,j});
                    }
                }
            }
            time++;
        }
        if(fo==0)return time;
        return -1;
    }
};