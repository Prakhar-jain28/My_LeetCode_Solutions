class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int g = 0, c = 0;
        int n = gas.size();
        for (int i = 0; i < n; i++)
        {
            g += gas[i];
            c += cost[i];
        }

        if (g < c)
            return -1;

        int fuel = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            fuel += gas[i] - cost[i];
            if (fuel <= -1)
            {
                fuel = 0;
                res = i + 1;
            }
        }
        return res;
    }
};