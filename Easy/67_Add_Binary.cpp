class Solution
{
public:
    string addBinary(string a, string b)
    {
        int len1 = a.length() - 1, len2 = b.length() - 1, c = 0;
        string ans;
        while (len1 >= 0 || len2 >= 0 || c)
        {
            int sum = c;
            if (len1 >= 0)
                sum += a[len1--] - '0';
            if (len2 >= 0)
                sum += b[len2--] - '0';
            if (sum > 1)
                c = 1;
            else
                c = 0;
            ans += to_string(sum % 2);
        }
        if (c)
            ans += to_string(c);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};