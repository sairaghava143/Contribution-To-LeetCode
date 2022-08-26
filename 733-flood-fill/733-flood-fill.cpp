class Solution {
public:
    void helper(vector<vector<int>>& image, int i, int j,int n,int m, int color,int val){
        if(i<0 || j<0 || i>=n || j>=m || image[i][j]!=val || image[i][j]==color){
            return;
        }
                                                                                         image[i][j]=color;
                                                                                         helper(image,i-1,j,n,m,color,val);
                                                                                         helper(image,i+1,j,n,m,color,val);
                                                                                         helper(image,i,j-1,n,m,color,val);
                                                                                         helper(image,i,j+1,n,m,color,val);
                                                                                   

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        helper(image,sr,sc,n,m,color,val);
        return image;
    }
};