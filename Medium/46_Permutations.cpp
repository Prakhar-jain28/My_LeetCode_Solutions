class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;
        solve(res, 0, nums);
        return res;
    }
    void solve(vector<vector<int>> &res, int begin, vector<int> &nums)
    {
        if (begin == nums.size())
        {
            res.push_back(nums);
            return;
        }
        for (int i = begin; i < nums.size(); i++)
        {
            swap(nums[begin], nums[i]);
            solve(res, begin + 1, nums);
            swap(nums[begin], nums[i]);
        }
    }
};