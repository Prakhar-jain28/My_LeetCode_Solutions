//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int matrixMultiplication(int n, int arr[])
    {
        vector<vector<int>> dp(n, vector<int>(n, -1));
        // memset(dp,-1,sizeof(dp));
        return solve(arr, dp, 1, n - 1);
        // return dp[n][n];
    }

    int solve(int arr[], vector<vector<int>> &dp, int i, int j)
    {
        int mn = INT_MAX;
        if (i >= j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        for (int k = i; k < j; k++)
        {
            int temp = solve(arr, dp, i, k) + solve(arr, dp, k + 1, j) + (arr[i - 1] * arr[k] * arr[j]);
            if (temp < mn)
                mn = temp;
        }
        return dp[i][j] = mn;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.matrixMultiplication(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends