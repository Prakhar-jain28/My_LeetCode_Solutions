class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        long long int x = 1;
        while (x < (pow(2, 31) - 1))
        {
            if (n == x)
                return 1;
            else
                x *= 3;
        }
        return 0;
    }
};