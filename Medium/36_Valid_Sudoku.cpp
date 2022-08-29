class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int hash1[9][10], hash2[9][10], hash3[9][10];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                hash1[i][j] = 0;
                hash2[i][j] = 0;
                hash3[i][j] = 0;
            }
        }
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    hash1[i][board[i][j] - '0']++;
                    hash2[j][board[i][j] - '0']++;
                    hash3[(i / 3) * 3 + (j / 3)][board[i][j] - '0']++;
                }
            }
        }
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (hash1[i][j] > 1)
                    return 0;

                if (hash2[i][j] > 1)
                    return 0;

                if (hash3[i][j] > 1)
                    return 0;
            }
        }
        return 1;
    }
};