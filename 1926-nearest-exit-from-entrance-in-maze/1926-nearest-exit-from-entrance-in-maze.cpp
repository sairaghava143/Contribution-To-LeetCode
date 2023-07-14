class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int rows=maze.size(),cols=maze[0].size();
        int srow=entrance[0];
        int scol=entrance[1];
        
        vector<pair<int,int>>dirs={{1,0},{-1,0},{0,1},{0,-1}};
        
        maze[srow][scol]='+';
        
        queue<array<int,3>>q;
        q.push({srow,scol,0});
        while(!q.empty()){
            auto [currR,currC,currD]=q.front();
            q.pop();
            for(auto dir:dirs){
                int nrow=currR+dir.first,ncol=currC+dir.second;
                
                if(nrow>=0 && nrow<rows && ncol>=0 && ncol<cols  && maze[nrow][ncol]=='.'){
                    if(nrow==0 || nrow==rows-1 || ncol==0 || ncol==cols-1){
                        return currD+1;
                    }
                    maze[nrow][ncol]='+';
                                    q.push({nrow,ncol,currD+1});

                }
                
                
            }
        }
return -1;
        
    }
};