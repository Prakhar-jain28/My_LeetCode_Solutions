//{ Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
public:
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>> dp(x, vector<int>(y, -1));
        int ans = 0;
        return solve(dp, ans, s1, s2, x, y);
    }
    int solve(vector<vector<int>> &dp, int ans, string s1, string s2, int x, int y)
    {
        if (x == 0 || y == 0)
            return 0;
        if (dp[x - 1][y - 1] != -1)
            return dp[x - 1][y - 1];

        if (s1[x - 1] == s2[y - 1])
            return dp[x - 1][y - 1] = solve(dp, ans, s1, s2, x - 1, y - 1) + 1;
        else
            return dp[x - 1][y - 1] = max(solve(dp, ans, s1, s2, x - 1, y), solve(dp, ans, s1, s2, x, y - 1));
    }
};

//{ Driver Code Starts.
int main()
{
    int t, n, k, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y; // Take size of both the strings as input
        string s1, s2;
        cin >> s1 >> s2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends