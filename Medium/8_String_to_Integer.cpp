class Solution
{
public:
    int myAtoi(string s)
    {
        if (s.length() == 0)
        {
            return 0;
        }

        int i = 0;
        while (s[i] == ' ')
        {
            i++;
        }
        s = s.substr(i);

        int flag = 1;
        if (s[0] == '-')
        {
            flag = -1;
        }

        i = (s[0] == '+' || s[0] == '-') ? 1 : 0;
        long ans = 0;
        for (; i < s.length() && s[i] >= '0' && s[i] <= '9'; i++)
        {
            ans = ((ans * 10) + (s[i] - '0'));

            if (flag == -1)
            {
                if (ans * -1 < INT_MIN)
                {
                    return INT_MIN;
                }
            }
            else
            {
                if (ans > INT_MAX)
                {
                    return INT_MAX;
                }
            }
        }
        return (int)(ans * flag);
    }
};