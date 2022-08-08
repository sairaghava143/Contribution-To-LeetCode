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
    void solve2(vector<int> rowleft,vector<int> lowerbound,vector<int>upperbound,vector<vector<string>>&ans,int col,int n,vector<string> s){
        if(col==n){
            ans.push_back(s);
            return ;
        }
        
        for(int row=0;row<n;row++){
            if(rowleft[row]==0 && lowerbound[col+row]==0 && upperbound[n-1+col-row]==0){
                s[row][col]='Q';
                rowleft[row]=1;
                lowerbound[row+col]=1;
                upperbound[n-1+col-row]=1;
                solve2(rowleft,lowerbound,upperbound,ans,col+1,n,s);
                s[row][col]='.';
                rowleft[row]=0;
                lowerbound[row+col]=0;
                upperbound[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        //brute force
        // vector<vector<string>>ans;
        // vector<string>s(n);
        // string st(n,'.');
        // for(int i=0;i<n;i++){
        //     s[i]=st;
        // }
        // solve(ans,s,n,0);
        // return ans;
        
        ///optimized approach using hash
        vector<int>rowleft(n,0),lowerbound(2*n-1,0),upperbound(2*n-1,0);
        vector<vector<string>>ans;
        vector<string>s(n);
        string st(n,'.');
        for(int i=0;i<n;i++){
            s[i]=st;
        }
        solve2(rowleft,lowerbound,upperbound,ans,0,n,s);
        return ans;
        
        
    }
};