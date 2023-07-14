class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& ent) {
        //practice bfs approach for shortestpath
        int rows=maze.size(),cols=maze[0].size();
        int srow=ent[0],scol=ent[1];
        
        vector<pair<int,int>>dirs={{1,0},{-1,0},{0,1},{0,-1}};
        maze[srow][scol]='+'; // mark the starting point as visited
        queue<vector<int>>q;
        q.push({srow,scol,0});
        while(!q.empty()){
            vector<int>v=q.front();
            q.pop();
            int currR=v[0],currC=v[1],currD=v[2];
            for(auto dir:dirs){
                int nrow=currR+dir.first,ncol=currC+dir.second;
                
                if(nrow>=0 && nrow<rows && ncol>=0 && ncol<cols && maze[nrow][ncol]=='.'){ // check if ncol is within bounds
                    if(nrow==0||nrow==rows-1||ncol==0||ncol==cols-1){
                        return currD+1;
                    }
                    maze[nrow][ncol]='+'; // mark the cell as visited
                    q.push({nrow,ncol,currD+1});
                }
            }
        }
        return -1;
    }
};