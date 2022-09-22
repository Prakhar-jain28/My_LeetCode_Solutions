class Solution
{
public:
    string reverseWords(string s)
    {
        int f = 0, b;
        while (s[f] == ' ')
            f++;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                b = i - 1;
                while (f <= b)
                {
                    char ch = s[f];
                    s[f] = s[b];
                    s[b] = ch;
                    f++;
                    b--;
                }
                f = i + 1;
            }
        }
        b = s.size() - 1;
        while (f <= b)
        {
            char ch = s[f];
            s[f] = s[b];
            s[b] = ch;
            f++;
            b--;
        }
        return s;
    }
};