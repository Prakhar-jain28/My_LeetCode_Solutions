class Solution
{
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> res;
        vector<int> order;
        solve(res, order, n, k, 1);
        return res;
    }

    void solve(vector<vector<int>> &res, vector<int> &order, int n, int k, int curr)
    {
        if (k == 0)
        {
            res.push_back(order);
            return;
        }
        if (curr > n)
            return;
        order.push_back(curr);
        solve(res, order, n, k - 1, curr + 1);
        order.pop_back();
        solve(res, order, n, k, curr + 1);
    }
};