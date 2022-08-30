class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        set<vector<int>> res;
        vector<int> set;
        int idx = 0;
        sort(nums.begin(), nums.end());
        solve(nums, res, set, idx);
        vector<vector<int>> res1;

        for (auto it : res)
        {
            res1.push_back(it);
        }
        return res1;
    }

    void solve(vector<int> &nums, set<vector<int>> &res, vector<int> &set, int idx)
    {
        if (idx == nums.size())
        {
            res.insert(set);
            return;
        }
        set.push_back(nums[idx]);
        solve(nums, res, set, idx + 1);
        set.pop_back();
        solve(nums, res, set, idx + 1);
    }
};