class Solution
{
public:
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int sum = 0;
        int n = nums.size();
        int zero = 0;
        target = abs(target);
        if (nums.size() == 1)
        {
            if (abs(nums[0]) == abs(target))
                return 1;
            else
                return 0;
        }
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (nums[i] == 0)
                zero++;
        }
        if (sum == 0)
        {
            return pow(2, zero);
        }
        if ((target + sum) % 2 == 1)
            return 0;
        else
            sum = (target + sum) / 2;
        int dp[n + 1][sum + 1];

        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < sum + 1; j++)
            {
                if (i == 0)
                    dp[i][j] = 0;
                if (j == 0)
                    dp[i][j] = 1;
            }
        }

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < sum + 1; j++)
            {
                if (j >= nums[i - 1])
                {
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        return dp[n][sum];
    }
};