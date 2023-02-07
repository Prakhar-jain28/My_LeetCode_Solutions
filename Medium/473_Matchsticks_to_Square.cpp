class Solution
{
public:
    bool solve(vector<int> &sticks, vector<bool> &flag, int sum, int curr, int idx, int res)
    {
        if (res == 4)
            return 1;
        if (sum == curr)
        {
            return solve(sticks, flag, sum, 0, 0, res + 1);
        }
        // for(int i = idx ; i < sticks.size() ; i++)
        // {
        //     if(curr+sticks[i] <= sum)
        //     {
        //         solve(sticks,flag,sum,curr+sticks[i] , i+1);
        //     }
        // }
        for (int i = idx; i < sticks.size(); i++)
        {
            if (curr + sticks[i] > sum || flag[i])
                continue;
            flag[i] = 1;
            if (solve(sticks, flag, sum, curr + sticks[i], i + 1, res))
                return 1;
            flag[i] = 0;
        }
        return 0;
    }

    bool makesquare(vector<int> &sticks)
    {
        int sum = 0;
        vector<bool> flag(sticks.size(), 0);
        for (int i = 0; i < sticks.size(); i++)
        {
            sum += sticks[i];
        }
        if (sum % 4 != 0)
            return 0;
        sum = sum / 4;

        return solve(sticks, flag, sum, 0, 0, 0);
    }
};