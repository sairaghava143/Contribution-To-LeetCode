class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        long long ans=0;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(i-1<0 ){
                        ans++;
                    }else{
                                            if(grid[i-1][j]==0)ans++;

                    }
                     if(j-1<0  ){
                        ans++;
                    }else{
                                             if(grid[i][j-1]==0)ans++;

                     }
                     if( i+1>=n  ){
                        ans++;
                    }else{
                                             if(grid[i+1][j]==0)ans++;

                     }
                     if(j+1>=m ){
                        ans++;
                    }else{
                                             if(grid[i][j+1]==0)ans++;

                     }

                }
            }
        }
        return ans;
    }
};