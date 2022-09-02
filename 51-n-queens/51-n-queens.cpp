class Solution {
public:
    bool isSafe(int row,int col,vector<string> &v,int &n){
        int duprow=row;
        int dupcol=col;
  
        while(dupcol>=0){
            if(v[duprow][dupcol--]=='Q')return false;
        }
    duprow=row;
    dupcol=col;
            
        while(dupcol>=0 && duprow>=0){
            if(v[duprow--][dupcol--]=='Q')return false;
        }
    duprow=row;
    dupcol=col;
            
        while(dupcol>=0 && duprow<n){
            if(v[duprow++][dupcol--]=='Q')return false;
        }
        return true;
    }
    void solve(int n,vector<string>v,vector<vector<string>>&ans,int col){
        if(col>=n){
                    ans.push_back(v);
            return;
        }
        
        for(int i=0;i<n;i++){
            if(isSafe(i,col,v,n)){
              v[i][col]  ='Q';
                solve(n,v,ans,col+1);
              v[i][col] ='.';
                
                
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        string s(n,'.');
        vector<string>v(n);
        for(int i=0;i<n;i++){
            v[i]=s;
        }
        

        solve(n,v,ans,0);
        return ans;
    }
};