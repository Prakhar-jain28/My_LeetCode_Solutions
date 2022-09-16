class Solution
{
public:
    int minimumMoves(string s)
    {
        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'X')
            {
                if ((i + 2 < s.size()) && (s[i] == 'X' || s[i + 1] == 'X' || s[i + 2] == 'X'))
                {
                    res++;
                    i += 2;
                }
                else if ((i + 1 < s.size()) && (s[i] == 'X' || s[i++] == 'X'))
                {
                    i++;
                    res++;
                }
                else if ((i < s.size()) && (s[i] == 'X'))
                    res++;
            }
        }
        return res;
    }
};