class Solution
{
public:
    int minSwaps(string s)
    {
        int n = s.size();
        int count = 0;
        int mi = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ']')
                count--;
            else
                count++;
            mi = min(mi, count);
        }
        mi = abs(mi);
        // return count;
        if (mi % 2 == 1)
            return (mi + 1) / 2;
        else
            return mi / 2;
    }
};