//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find length of shortest common supersequence of two strings.
    string shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        int dp[m + 1][n + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (X[i - 1] == Y[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
        string res;
        int i = m + 1, j = n + 1;
        while (i || j)
        {
            if (X[i - 1] == Y[j - 1])
            {
                res += X[i - 1];
                i--;
                j--;
            }
            else
            {
                if (dp[i - 1][j] > dp[i][j - 1] || j == 0)
                {
                    res += X[i - 1];
                    i--;
                }
                else
                {
                    res += Y[j - 1];
                    j--;
                }
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;

    // taking total testcases
    cin >> t;
    while (t--)
    {
        string X, Y;
        // taking String X and Y
        cin >> X >> Y;

        // calling function shortestCommonSupersequence()
        Solution obj;
        cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size()) << endl;
    }
    return 0;
}

// } Driver Code Ends