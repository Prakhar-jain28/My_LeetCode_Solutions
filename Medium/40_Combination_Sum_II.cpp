class Solution
{
public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> res;
        vector<int> set;
        int sum = 0;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, res, set, sum, 0);
        return res;
    }

    void solve(vector<int> &candidates, int target, vector<vector<int>> &res, vector<int> &set, int sum, int idx)
    {
        if (sum > target)
        {
            return;
        }
        if (idx == candidates.size())
        {
            if (sum == target)
            {
                res.push_back(set);
            }
            return;
        }
        if (candidates[idx] <= (target - sum))
        {
            sum += candidates[idx];
            set.push_back(candidates[idx]);
            solve(candidates, target, res, set, sum, idx + 1);
            set.pop_back();
            sum -= candidates[idx];
        }
        while (idx + 1 < candidates.size() && candidates[idx] == candidates[idx + 1])
            idx++;
        solve(candidates, target, res, set, sum, idx + 1);
    }
};