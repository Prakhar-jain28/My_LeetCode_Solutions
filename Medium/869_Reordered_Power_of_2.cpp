class Solution
{
public:
    bool reorderedPowerOf2(int n)
    {
        string str = to_string(n);
        sort(str.begin(), str.end());
        long long int pow = 1;
        for (int i = 0; i < 31; i++)
        {
            string str1 = to_string(pow);
            sort(str1.begin(), str1.end());
            if (str == str1)
                return 1;
            pow *= 2;
        }
        return 0;
    }
};