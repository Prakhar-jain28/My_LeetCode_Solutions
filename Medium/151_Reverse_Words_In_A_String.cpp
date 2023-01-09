class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> res;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            string str = "";

            while (s[i] == ' ' && n > i)
                i++;

            while (s[i] != ' ' && n > i)
            {
                str += s[i++];
            }

            if (str == "" || str == " ")
                continue;
            res.push_back(str);
        }
        string f = "";
        for (int i = res.size() - 1; i > 0; i--)
        {
            f += res[i];
            f += " ";
        }
        f += res[0];
        return f;
    }
};