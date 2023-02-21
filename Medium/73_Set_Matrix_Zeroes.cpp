class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<vector<int>> s;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                    s.push_back({i, j});
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < matrix[s[i][0]].size(); j++)
            {
                matrix[s[i][0]][j] = 0;
            }
            for (int j = 0; j < matrix.size(); j++)
            {
                matrix[j][s[i][1]] = 0;
            }
        }
    }
};