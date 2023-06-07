//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int lenOfLongSubarr(int arr[], int N, int k)
    {
        // Complete the function
        long long sum = 0;
        int maxLen = 0;
        unordered_map<long long, int> mpp;
        // mpp[0] = 1;

        for (int i = 0; i < N; i++)
        {
            sum += arr[i];

            if (sum == k)
            {
                maxLen = max(maxLen, i + 1);
                // mpp[sum] = i;
            }

            // if sum is not found somewhere in map then update the sum- index pair in map
            if (mpp.find(sum) == mpp.end())
            {
                mpp[sum] = i;
            }

            // if sum - k is found somewhere in map then update the new length of subarray with sum = k
            if (mpp.find(sum - k) != mpp.end())
            {

                maxLen = max(maxLen, i - mpp[sum - k]);
            }
        }

        return maxLen;
    }
};

//{ Driver Code Starts.

int main()
{
    // code

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n, k) << endl;
    }

    return 0;
}
// } Driver Code Ends