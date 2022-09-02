class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int &i,int &j,char &c){
        for(int x=0;x<9;x++){
            if(board[x][j]==c)return false;
            if(board[i][x]==c)return false;
            if(board[3*(i/3)+(x/3)][3*(j/3)+(x%3)]==c)return false;
        
        }
        
        return true;
    }
    bool solve(vector<vector<char>>& board){
         int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                         if(isSafe(board,i,j,c)){
                        board[i][j]=c;
                             if(solve(board)){
                                 return true;
                             }
                                 board[i][j]='.';
                             
                    }
                    }
                                            return false;

                   
                }
                
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};