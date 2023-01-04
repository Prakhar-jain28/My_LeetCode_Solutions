class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < tasks.size(); i++)
        {
            hash[tasks[i]]++;
        }
        int res = 0;
        for (auto it : hash)
        {
            if (it.second < 2)
                return -1;

            if (it.second % 3 == 0)
                res = res + (it.second / 3);
            else
            {
                res = res + (it.second / 3) + 1;
            }
        }
        return res;
    }
};