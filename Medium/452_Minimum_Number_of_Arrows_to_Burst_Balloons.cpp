class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        int res = 1;
        if (points.size() == 1)
            return 1;
        sort(points.begin(), points.end());
        int prev = points[0][1];
        for (int i = 0; i < points.size(); i++)
        {
            if (points[i][0] <= prev)
            {
                prev = min(prev, points[i][1]);
                continue;
            }
            else
            {
                res++;
                prev = points[i][1];
            }
            prev = min(points[i][1], prev);
        }
        return res;
    }
};