class Solution
{
public:
    bool isSafe(int col, int row, vector<string> board, int n)
    {
        int duprow = row;
        int dupcol = col;
        while (row >= 0 && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        col = dupcol;
        row = duprow;
        while (row < n && col >= 0)
        {
            if (board[row][col] == 'Q')
                return 0;
            row++;
            col--;
        }
        col = dupcol;
        row = duprow;
        while (col >= 0)
        {
            if (board[row][col] == 'Q')
                return 0;
            col--;
        }
        return 1;
    }

    int solve(int col, vector<string> &board, int n)
    {
        int res = 0;
        if (col == n)
        {
            res++;
        }
        for (int row = 0; row < n; row++)
        {
            if (isSafe(col, row, board, n))
            {
                board[row][col] = 'Q';
                res += solve(col + 1, board, n);
                board[row][col] = '.';
            }
        }
        return res;
    }

    int totalNQueens(int n)
    {
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        return solve(0, board, n);
    }
};