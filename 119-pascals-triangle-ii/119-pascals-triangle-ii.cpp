class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        n++;
        vector<vector<int>>v(n+1);
        for(int i=0;i<n;i++){
            v[i].resize(i+1);
            v[i][0]=1,v[i][i]=1;
            for(int j=1;j<i;j++){
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
                    return v[rowIndex];

    }
};