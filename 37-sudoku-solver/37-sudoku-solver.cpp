class Solution
{
public:
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
    bool solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                {
                    for (char c = '1'; c <= '9'; c++)
                    {
                        if (isValid(board, i, j, c))
                        {
                            board[i][j] = c;
                            if (solve(board))
                                return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isValid(vector<vector<char>> &board, int i, int j, char c)
    {
        for (int k = 0; k < 9; k++)
        {
            if (board[i][k] == c)
                return false;
            if (board[k][j] == c)
                return false;
        }
        int x = i / 3 * 3;
        int y = j / 3 * 3;
        for (int k = 0; k < 3; k++)
        {
            for (int l = 0; l < 3; l++)
            {
                if (board[x + k][y + l] == c)
                    return false;
            }
        }
        return true;
    }
};

