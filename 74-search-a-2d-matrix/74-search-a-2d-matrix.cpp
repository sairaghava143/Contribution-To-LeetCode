class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
//         if(m==1 && n==1){
//             if( matrix[m-1][n-1]!=target){
//                     return false;
//             }
           
//         return true;
//         }
        int i=0,j=n-1;
        while(i<m && j<n){
            if(target==matrix[i][j]){
                return true;
            }else if(target<=matrix[i][j] && target<=matrix[i][n-1] && target>=matrix[i][0]){
                j--;
            }else if(target>matrix[i][j] && target>=matrix[i][n-1] && target>=matrix[i][0]){
            i++;
            }else{
                return false;
            }
        }
        return false;
    }
};