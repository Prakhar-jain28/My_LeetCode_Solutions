
class Solution
{
public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> res;
        string s;
        solve(res, s, m, n, 0, 0);
        return res;
    }

    void solve(vector<string> &res, string s, vector<vector<int>> &matrix, int n, int i, int j)
    {
        if (i < 0 || j < 0 || i >= n || j >= n || matrix[i][j] == 0)
            return;
        if (i == n - 1 && j == n - 1)
        {
            res.push_back(s);
            return;
        }
        // if(i<0||j<0||i>=n||j>=n||matrix[i][j]==0)
        // return;

        matrix[i][j] = 0;

        solve(res, s + 'D', matrix, n, i + 1, j);

        solve(res, s + 'R', matrix, n, i, j + 1);

        solve(res, s + 'U', matrix, n, i - 1, j);

        solve(res, s + 'L', matrix, n, i, j - 1);

        matrix[i][j] = 1;
        return;
    }
};
