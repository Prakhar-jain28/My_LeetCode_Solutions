class Solution
{
public:
    string bin = "01";
    unordered_map<string, bool> hash;
    bool found = 0;
    void sol(vector<string> &nums, string s, int n, int idx)
    {
        if (found)
            return;
        if (idx == n)
        {
            if (hash[s] != 1)
            {
                bin = s;
                found = 1;
            }
            return;
        }

        sol(nums, s, n, idx + 1);
        s[idx] = '1';
        sol(nums, s, n, idx + 1);
    }

    string findDifferentBinaryString(vector<string> &nums)
    {
        int n = nums.size();
        string s(n, '0');
        for (int i = 0; i < n; i++)
        {
            hash[nums[i]] = 1;
        }
        sol(nums, s, n, 0);
        return bin;
    }
};