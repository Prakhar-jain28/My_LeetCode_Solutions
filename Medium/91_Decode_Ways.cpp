class Solution
{
public:
    vector<int> dp;
    int numDecodings(string s)
    {
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            dp.push_back(-1);
        }
        return solve(s, 0, n);
    }
    int solve(string s, int i, int n)
    {
        if (i >= n)
            return 1;
        if (dp[i] != -1)
            return dp[i];
        int c = 0, num = 0;
        for (int k = i; k < n; k++)
        {
            num = num * 10 + (s[k] - '0');
            if (num >= 1 && num <= 26)
                c = c + solve(s, k + 1, n);
            else
                break;
        }
        return dp[i] = c;
    }
};