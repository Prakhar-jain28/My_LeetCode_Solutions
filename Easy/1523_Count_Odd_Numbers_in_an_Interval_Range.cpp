class Solution
{
public:
    int countOdds(int low, int high)
    {
        if (low % 2 == 0 && high % 2 == 0)
            return (high - low) / 2;
        else
            return 1 + (high - low) / 2;
        // 1 2 3 4 5 6 7 8 9
    }
};