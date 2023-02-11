class Solution
{
public:
    int trap(vector<int> &arr)
    {
        int n = arr.size();
        int maxl[n], maxr[n];
        maxl[0] = arr[0];
        maxr[n - 1] = arr[n - 1];
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            maxl[i] = max(maxl[i - 1], arr[i]);
            maxr[n - i - 1] = max(maxr[n - i], arr[n - i - 1]);
        }
        for (int i = 0; i < n; i++)
        {
            res += min(maxl[i], maxr[i]) - arr[i];
        }
        return res;
    }
};