class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 2; i < nums.size(); i++)
        {
            if ((nums[i] + nums[i - 1]) > nums[i - 2] && (nums[i - 1] + nums[i - 2]) > nums[i] && (nums[i - 2] + nums[i]) > nums[i - 1])
                res = max(res, nums[i] + nums[i - 1] + nums[i - 2]);
        }
        return res;
    }
};