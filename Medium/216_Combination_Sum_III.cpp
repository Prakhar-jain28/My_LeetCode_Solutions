class Solution
{
public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> res;
        vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> comb;
        solve(k, n, res, arr, comb, 0);
        return res;
    }

    void solve(int k, int n, vector<vector<int>> &res, vector<int> &arr, vector<int> &comb, int idx)
    {
        if (k == 0 && n == 0)
        {
            res.push_back(comb);
            return;
        }
        if (k == 0 && n != 0)
            return;
        if (k != 0 && n == 0)
            return;
        if (idx == arr.size())
            return;

        comb.push_back(arr[idx]);
        solve(k - 1, n - arr[idx], res, arr, comb, idx + 1);
        comb.pop_back();
        solve(k, n, res, arr, comb, idx + 1);
    }
};