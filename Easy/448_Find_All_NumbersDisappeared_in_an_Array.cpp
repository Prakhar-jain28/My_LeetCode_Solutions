class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int hash[100000];
        for (int i = 0; i < 100000; i++)
        {
            hash[i] = 0;
        }
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i] - 1]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (hash[i] == 0)
            {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};