class Solution
{
public:
    static bool func(string a, string b)
    {
        if (a.size() == b.size())
            return (a >= b) ? 0 : 1;
        else
            return (a.size() > b.size()) ? 0 : 1;
    }

    string kthLargestNumber(vector<string> &nums, int k)
    {
        sort(nums.begin(), nums.end(), func);
        return nums[nums.size() - k];
    }
};