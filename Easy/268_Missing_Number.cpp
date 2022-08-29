class Solution
{
public:
    int xorr(int n)
    {
        if (n % 4 == 0)
            return n;
        if (n % 4 == 1)
            return 1;
        if (n % 4 == 2)
            return n + 1;
        else
            return 0;
    }
    int missingNumber(vector<int> &nums)
    {
        int temp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            temp = temp ^ nums[i];
        }
        return temp ^ xorr(nums.size());
    }
};