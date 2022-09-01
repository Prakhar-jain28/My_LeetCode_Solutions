class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int res = high;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            long long int hours = 0;
            for (int i = 0; i < piles.size(); i++)
            {
                if (piles[i] % mid == 0)
                    hours += piles[i] / mid;
                else
                    hours += (piles[i] / mid) + 1;
            }
            if (hours <= h)
            {
                res = min(res, mid);
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return res;
    }
};