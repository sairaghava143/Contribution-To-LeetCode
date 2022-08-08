class Solution {
public:
    bool isSafe(int row,int col,vector<string> s,int n){
        int duprow=row,dupcol=col;
        while(row>=0 && col>=0){
            if(s[row][col]=='Q')return false;
            row--;
            col--;
        }
    row=duprow,col=dupcol;
        while(col>=0){
            if(s[row][col]=='Q')return false;
            col--;
        }
    row=duprow,col=dupcol;

        while(row<n && col>=0){
            if(s[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(vector<vector<string>>&ans,vector<string>s,int n,int col){
        if(col==n){
            ans.push_back(s);
            return;
        }
        
        for(int row=0;row<n;row++){
            if(isSafe(row,col,s,n)){
                s[row][col]='Q';
                solve(ans,s,n,col+1);
                s[row][col]='.';
            }
        }
    }
    
    void solve2(vector<vector<string>>&ans,vector<string>s,int n,int col,vector<int>rowleft,vector<int>lowerbound,vector<int>upperbound){
        if(col==n){
            ans.push_back(s);
            return;
        }
        for(int row=0;row<n;row++){
            if(rowleft[row]==0 && lowerbound[row+col]==0 && upperbound[n-1+col-row]==0){
                s[row][col]='Q';
                rowleft[row]=1;
                lowerbound[row+col]=1;
                upperbound[n-1+col-row]=1;
                solve2(ans,s,n,col+1,rowleft,lowerbound,upperbound);
                s[row][col]='.';
                rowleft[row]=0;
                lowerbound[row+col]=0;
                upperbound[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ///brute force
//         vector<vector<string>>ans;
//         vector<string>s(n);
//         string st(n,'.');
//         for(int i=0;i< n;i++){
//             s[i]=st;
//         }
        
//         solve(ans,s,n,0);
//         return ans;
        
        //optimized approach
        vector<vector<string>>ans;
        vector<int> rowleft(n,0),lowerbound(2*n-1,0),upperbound(2*n-1,0);
        vector<string>s(n);
        string st(n,'.');
        for(int i=0;i< n;i++){
            s[i]=st;
        }
        
        solve2(ans,s,n,0,rowleft,lowerbound,upperbound);
        return ans;
    }
};