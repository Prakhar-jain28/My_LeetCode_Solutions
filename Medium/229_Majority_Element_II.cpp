class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> res;
        int n = nums.size() / 3;
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]]++;
        }
        for (auto it : hash)
        {
            if (it.second > n)
                res.push_back(it.first);
        }
        return res;
    }
};