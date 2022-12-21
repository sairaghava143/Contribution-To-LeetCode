class Solution {
public:
  void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    bool set_first_row = false;
    bool set_first_col = false;
    
    // Check if first row and first column need to be set to 0
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) {
            set_first_col = true;
            break;
        }
    }
    for (int j = 0; j < n; j++) {
        if (matrix[0][j] == 0) {
            set_first_row = true;
            break;
        }
    }
    
    // Set first element of each row and column to 0 if corresponding element in matrix is 0
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    // Set each element to 0 if either first element of the row or column is 0
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Set first row and first column to 0 if necessary
    if (set_first_row) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }
    if (set_first_col) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}

};