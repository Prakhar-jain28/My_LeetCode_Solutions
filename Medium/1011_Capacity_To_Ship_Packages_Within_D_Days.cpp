class Solution
{
public:
    bool check(int limit, int days, vector<int> &weights)
    {
        int sum = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            if (sum + weights[i] > limit)
            {
                sum = weights[i];
                days--;
            }
            else
            {
                sum += weights[i];
            }
        }
        if (days - 1 >= 0)
            return 1;
        else
            return 0;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int r = 0;
        int n = weights.size();
        int l = INT_MIN;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            l = max(l, weights[i]);
            r += weights[i];
        }
        int mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (check(mid, days, weights))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }
};