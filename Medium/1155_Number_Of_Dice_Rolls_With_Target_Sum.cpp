class Solution
{
public:
    int numRollsToTarget(int n, int k, int target)
    {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return solve(n, k, target, dp);
    }
    int mod = 1000000007;
    int solve(int dice, int face, int target, vector<vector<int>> &dp)
    {
        if (dice == 0 && target != 0)
            return 0;
        if (target == 0 && dice != 0)
            return 0;
        if (dice == 0 && target == 0)
            return 1;
        if (target < 0)
            return 0;
        if (dp[dice][target] != -1)
            return dp[dice][target];
        int res = 0;
        for (int i = 1; i <= face; i++)
        {
            res = (res % mod + solve(dice - 1, face, target - i, dp) % mod) % mod;
        }
        return dp[dice][target] = res;
    }
};