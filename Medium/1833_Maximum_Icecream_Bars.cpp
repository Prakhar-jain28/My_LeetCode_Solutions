class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        int res = 0;
        sort(costs.begin(), costs.end());
        for (int i = 0; i < costs.size(); i++)
        {
            if (coins >= costs[i])
            {
                res++;
                coins -= costs[i];
            }
            else
                break;
        }
        return res;
    }
};