class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        int maxl[n], maxr[n];
        maxl[0] = arr[0];
        maxr[n - 1] = arr[n - 1];
        for (int i = 1; i < n; i++)
        {
            maxl[i] = max(maxl[i - 1], arr[i]);
            maxr[n - i - 1] = max(maxr[n - i], arr[n - i - 1]);
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += min(maxl[i], maxr[i]) - arr[i];
        }
        return ans;
    }
};