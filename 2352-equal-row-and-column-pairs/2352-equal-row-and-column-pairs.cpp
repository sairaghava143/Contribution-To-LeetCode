class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int n=grid.size();
        map<int,vector<int>>m1,m2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m1[i].push_back(grid[i][j]);
                m2[i].push_back(grid[j][i]);

            }
        }
        
        int ans=0;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m1[i]==m2[j])ans++;

            }
        }
        return ans;
    }
    
};