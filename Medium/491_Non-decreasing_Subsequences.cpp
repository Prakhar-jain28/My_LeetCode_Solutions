class Solution
{
public:
    map<vector<int>, int> hash;
    void solve(vector<int> &nums, vector<vector<int>> &res, vector<int> &arr, int n, int idx)
    {
        if (idx == n)
        {
            if (arr.size() > 1 && hash[arr] == 0)
            {
                res.push_back(arr);
                hash[arr]++;
            }
            return;
        }
        if (arr.size() > 1 && hash[arr] == 0)
        {
            res.push_back(arr);
            hash[arr]++;
        }

        if (arr.size() == 0 || arr[arr.size() - 1] <= nums[idx])
        {

            arr.push_back(nums[idx]);
            // if(hash[arr]==0)
            solve(nums, res, arr, n, idx + 1);
            // if(hash[arr]==0)
            arr.pop_back();
            solve(nums, res, arr, n, idx + 1);
        }
        else
        {
            solve(nums, res, arr, n, idx + 1);
        }
    }

    vector<vector<int>> findSubsequences(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> arr;
        solve(nums, res, arr, nums.size(), 0);
        return res;
    }
};