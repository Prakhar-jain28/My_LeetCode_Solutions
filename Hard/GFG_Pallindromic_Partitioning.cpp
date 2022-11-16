//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<vector<int>> dp;
    int palindromicPartition(string str)
    {
        int n = str.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < n; j++)
            {
                temp.push_back(-1);
            }
            dp.push_back(temp);
        }
        return solve(str, 0, n - 1);
    }
    int solve(string &str, int i, int j)
    {
        if (i >= j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (ispal(str, j, i))
        {
            return 0;
        }
        int mn = INT_MAX;

        for (int k = i; k < j; k++)
        {
            int l, r;
            if (dp[i][k] != -1)
                l = dp[i][k];
            else
            {
                l = solve(str, i, k);
            }
            if (dp[k + 1][j] != -1)
                r = dp[k + 1][j];
            else
            {
                r = solve(str, k + 1, j);
            }
            mn = min(l + r + 1, mn);
        }
        return dp[i][j] = mn;
    }

    bool ispal(string s, int r, int l)
    {
        while (l <= r)
        {
            if (s[l++] != s[r--])
                return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        Solution ob;
        cout << ob.palindromicPartition(str) << "\n";
    }
    return 0;
}
// } Driver Code Ends