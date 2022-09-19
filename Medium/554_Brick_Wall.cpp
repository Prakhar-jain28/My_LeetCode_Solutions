class Solution
{
public:
    int leastBricks(vector<vector<int>> &wall)
    {
        unordered_map<int, int> hash;
        int res = 0;
        for (int i = 0; i < wall.size(); i++)
        {
            int curr = 0;
            for (int j = 0; j < wall[i].size() - 1; j++)
            {
                curr += wall[i][j];
                hash[curr]++;
            }
        }
        for (auto it : hash)
        {
            res = max(res, it.second);
        }
        return wall.size() - res;
    }
};