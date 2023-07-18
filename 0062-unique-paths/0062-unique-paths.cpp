class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, -1));
        return uniquePathsHelper(m-1, n-1, memo);
    }
    
    int uniquePathsHelper(int i, int j, vector<vector<int>>& memo) {
        if (i == 0 || j == 0) {
            return 1;
        }
        if (memo[i][j] != -1) {
            return memo[i][j];
        }
        int paths = uniquePathsHelper(i-1, j, memo) + uniquePathsHelper(i, j-1, memo);
        memo[i][j] = paths;
        return paths;
    }
};