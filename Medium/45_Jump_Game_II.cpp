class Solution
{
public:
    int solve(vector<int> &res, vector<int> &nums, int idx, int n)
    {
        if (idx >= n - 1)
            return 0;
        if (res[idx] != INT_MAX - 1)
            return res[idx];
        int mx = INT_MAX - 1;
        for (int i = 1; i <= nums[idx]; i++)
        {
            mx = min(mx, solve(res, nums, idx + i, n) + 1);
        }
        return res[idx] = mx;
    }

    int jump(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> res(n, INT_MAX - 1);
        return solve(res, nums, 0, n);
    }
};