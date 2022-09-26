class Solution
{
public:
    bool exist(vector<vector<char>> &board, string word)
    {
        int n = board.size();
        int m = board[0].size();
        if (n == 0)
            return 0;
        if (word.size() == 0)
            return 0;
        // int size = word.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == word[0])
                {
                    if (solve(board, word, i, j, n, m, 0))
                        return 1;
                }
            }
        }
        return 0;
    }

    bool solve(vector<vector<char>> &board, string word, int i, int j, int n, int m, int idx)
    {
        if (idx >= word.size())
            return 1;
        if (i < 0 || i >= n || j < 0 || j >= m || word[idx] != board[i][j])
            return 0;
        if (word.size() == 1 && word[idx] == board[i][j])
            return 1;
        // char s = board[i][j];
        board[i][j] = '.';
        bool temp = 0;
        temp = temp || solve(board, word, i, j - 1, n, m, idx + 1);
        temp = temp || solve(board, word, i, j + 1, n, m, idx + 1);
        temp = temp || solve(board, word, i - 1, j, n, m, idx + 1);
        temp = temp || solve(board, word, i + 1, j, n, m, idx + 1);
        board[i][j] = word[idx];
        return temp;
    }
};