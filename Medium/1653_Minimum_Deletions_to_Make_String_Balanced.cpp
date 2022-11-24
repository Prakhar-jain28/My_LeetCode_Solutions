class Solution
{
public:
    int minimumDeletions(string s)
    {
        int n = s.size();
        vector<int> dp(n + 1, 0);
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                dp[i + 1] = min(dp[i] + 1, b);
            else
            {
                dp[i + 1] = dp[i];
                b++;
            }
        }
        return dp[n];
    }
};