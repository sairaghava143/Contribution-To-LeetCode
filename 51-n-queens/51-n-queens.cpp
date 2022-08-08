class Solution {
public:
    bool isSafe(vector<string> s,int row,int col,int n){
        int duprow=row;
        int dupcol=col;
        
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
        while(row<n && col >=0){
            if(s[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(vector<vector<string>> &ans,vector<string>s ,int n,int col){
        if(col==n){
            ans.push_back(s);
            return;
            
        }
        
        for(int row=0;row<n;row++){
            if(isSafe(s,row,col,n)){
                s[row][col]='Q';
                solve(ans,s,n,col+1);
                s[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        //brute force
        vector<vector<string>>ans;
        vector<string>s(n);
        string st(n,'.');
        for(int i=0;i<n;i++){
            s[i]=st;
        }
        solve(ans,s,n,0);
        return ans;
    }
};