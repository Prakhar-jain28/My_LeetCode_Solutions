class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        int sum = 0;
        int xorr = 0;
        int idx = 0;
        vector<int> res;
        solve(res, nums, xorr, idx);
        for (auto it : res)
        {
            cout << it << " ";
            sum += it;
        }
        return sum;
    }
    void solve(vector<int> &res, vector<int> &nums, int xorr, int idx)
    {
        if (idx == nums.size())
        {
            res.push_back(xorr);
            return;
        }
        xorr = xorr ^ nums[idx];
        solve(res, nums, xorr, idx + 1);
        xorr = xorr ^ nums[idx];
        solve(res, nums, xorr, idx + 1);
    }
};