class Solution
{
public:
    int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
    {
        vector<int> arr(n, INT_MAX);
        for (int i = 0; i < edges.size(); i++)
        {
            arr[edges[i][0]] = min(edges[i][1], arr[edges[i][0]]);
            arr[edges[i][1]] = min(edges[i][0], arr[edges[i][1]]);
        }

        vector<int> apple(n, 0);
        int idx = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (hasApple[i])
            {
                idx = i;
                while (not apple[idx] && idx != 0)
                {
                    apple[idx] = 1;
                    idx = arr[idx];
                }
            }
        }
        int res = 0;
        for (auto i : apple)
        {
            res += i;
        }
        return res * 2;
    }
};