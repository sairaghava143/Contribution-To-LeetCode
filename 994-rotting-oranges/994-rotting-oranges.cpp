class Solution {
public:
    struct cell{
        int x;
        int y;
        int time;
    };
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int dx[4]={-1,0,0,1};
        int dy[4]={0,-1,1,0};
        vector<vector<bool>>v(m,vector<bool>(n,false));
        queue<cell>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j,1});
                    v[i][j]=true;
                }
            }
            
        }
                    int time=0;

        while(!q.empty()){
            cell t=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int x=t.x+dx[i];
                int y=t.y+dy[i];
                if(x>=0 && y>=0 && x<m && y<n && v[x][y]==false && grid[x][y]==1){
                    v[x][y]=true;
                    grid[x][y]=2;
                    q.push({x,y,t.time+1});
                    time =max(time,t.time);
                }
            }
             
            
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
            
                    return time;

    }
};