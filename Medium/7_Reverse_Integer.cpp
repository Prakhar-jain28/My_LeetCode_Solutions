class Solution
{
public:
    int reverse(int x)
    {
        int temp = x;
        int newnum = 0;
        while (x != 0)
        {
            if (newnum > 214748364 || newnum < -214748364)
                return 0;
            newnum = (newnum * 10) + (x % 10);
            x = x / 10;
        }
        return newnum;
    }
};