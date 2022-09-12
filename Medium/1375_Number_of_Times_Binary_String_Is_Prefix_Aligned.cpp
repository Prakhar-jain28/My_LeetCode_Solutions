class Solution
{
public:
    int numTimesAllBlue(vector<int> &flips)
    {
        int res = 0;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < flips.size(); i++)
        {
            sum1 += flips[i] - 1;
            sum2 += i;
            if (sum1 == sum2)
                res++;
        }
        return res;
    }
};