class Solution
{
public:
    int addDigits(int num)
    {
        int ans = 0;
        if (num < 10)
            return num;
        while (num / 10)
        {
            ans = 0;
            while (num)
            {
                ans += num % 10;
                num = num / 10;
            }
            num = ans;
        }
        return ans;
    }
};