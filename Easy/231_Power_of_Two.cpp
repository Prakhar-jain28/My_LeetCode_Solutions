class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0 || n < 0)
            return 0;
        if ((abs(INT_MIN) % n) == 0)
            return 1;
        else
            return 0;
    }
};