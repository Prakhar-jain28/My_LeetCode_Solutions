class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int mx = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            mx = max(mx, nums[i]);
        }
        int ans = 1, temp = 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == mx && nums[i + 1] == mx)
                temp++;
            else
                temp = 1;
            ans = max(ans, temp);
        }
        return ans;
    }
};