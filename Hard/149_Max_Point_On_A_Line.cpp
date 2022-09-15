class Solution
{
    //[[0,0],[4,5],[7,8],[8,9],[5,6],[3,4],[1,1]]
public:
    int maxPoints(vector<vector<int>> &points)
    {
        int res = INT_MIN;
        if (points.size() == 1)
            return 1;
        for (int i = 0; i < points.size(); i++)
        {
            map<pair<int, int>, int> hash;
            int dub = 0, vertical = 0, mx = 0;
            for (int j = i + 1; j < points.size(); j++)
            {
                if (points[i][0] == points[j][0] && points[i][1] == points[j][1])
                {
                    dub++;
                }
                if (points[j][0] == points[i][0])
                {
                    vertical++;
                }
                else
                {
                    int y = points[j][1] - points[i][1];
                    int x = points[j][0] - points[i][0];
                    int gcdd = gcd(points[j][0] - points[i][0], points[j][1] - points[i][1]);
                    hash[make_pair(y / gcdd, x / gcdd)]++;
                    mx = max(mx, hash[make_pair(y / gcdd, x / gcdd)]);
                }
                mx = max(mx, vertical);
            }
            res = max(res, mx + dub + 1);
        }
        return res;
    }

    int gcd(int a, int b)
    {
        while (b)
        {
            a = a % b;
            swap(a, b);
        }
        return a;
    }
};

// 1+2+3= 6+1