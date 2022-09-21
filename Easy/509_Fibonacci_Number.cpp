class Solution
{
public:
    int fib(int n)
    {
        if (!n)
            return 0;
        if (n == 1)
            return 1;
        int prev = 0, prev1 = 1;
        int res = 0;
        while (--n)
        {
            res = prev + prev1;
            prev = prev1;
            prev1 = res;
        }
        return res;
    }
};