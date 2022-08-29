class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> res;
        vector<int> set;
        int sum = 0;
        solve(candidates, target, res, set, sum, 0);
        return res;
    }

    void solve(vector<int> &candidates, int target, vector<vector<int>> &res, vector<int> &set, int sum, int idx)
    {
        if (sum > target || idx == candidates.size())
        {
            return;
        }
        if (sum == target)
        {
            res.push_back(set);
            return;
        }
        if (candidates[idx] <= (target - sum))
        {
            sum += candidates[idx];
            set.push_back(candidates[idx]);
            solve(candidates, target, res, set, sum, idx);
            set.pop_back();
            sum -= candidates[idx];
        }
        solve(candidates, target, res, set, sum, idx + 1);
    }
};