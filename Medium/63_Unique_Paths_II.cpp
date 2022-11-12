class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &grid)
    {
        if (grid[0][0] == 1)
            return 0;
        int n = grid.size(), m = grid[0].size();
        int dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp));
        dp[1][1] = 1;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (i == 1 && j == 1)
                    continue;
                if (grid[i - 1][j - 1] == 1)
                {
                    dp[i][j] = 0;
                }
                else
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[n][m];
    }
};