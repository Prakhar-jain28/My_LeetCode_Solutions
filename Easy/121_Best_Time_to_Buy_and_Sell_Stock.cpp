class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mx = INT_MIN, mi = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            mi = min(mi, prices[i]);
            mx = max(mx, prices[i] - mi);
        }
        return mx;
    }
};