class Solution
{
public:
    string findLongestWord(string s, vector<string> &dic)
    {
        int mx = 0, ans = -1;
        sort(dic.begin(), dic.end());
        for (int i = 0; i < dic.size(); i++)
        {
            int p1 = 0, p2 = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == dic[i][p1])
                {
                    p1++;
                }
            }
            if (p1 == dic[i].size())
            {
                if (p1 > mx)
                {
                    mx = p1;
                    ans = i;
                }
            }
        }
        if (ans == -1)
            return "";
        return dic[ans];
    }
};