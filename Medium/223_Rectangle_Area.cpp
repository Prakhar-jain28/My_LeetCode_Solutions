class Solution
{
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        int ar1 = abs(ax1 - ax2) * abs(ay1 - ay2);
        int ar2 = abs(bx1 - bx2) * abs(by1 - by2);
        int ar3 = 0;
        int x = min(ax2, bx2) - max(ax1, bx1);
        int y = min(ay2, by2) - max(ay1, by1);
        if (x > 0 && y > 0)
        {
            ar3 = x * y;
        }
        return ar1 + ar2 - ar3;
    }
};