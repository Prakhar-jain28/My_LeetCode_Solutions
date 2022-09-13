class Solution
{
public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> res;
        vector<string> pals;
        solve(s, 0, res, pals);
        return res;
    }
    void solve(string s, int idx, vector<vector<string>> &res, vector<string> &pals)
    {
        if (idx == s.size())
        {
            res.push_back(pals);
            return;
        }
        for (int i = idx; i < s.size(); i++)
        {
            if (ispal(s, i, idx))
            {
                pals.push_back(s.substr(idx, i - idx + 1));
                solve(s, i + 1, res, pals);
                pals.pop_back();
            }
        }
    }

    bool ispal(string s, int r, int l)
    {
        while (l <= r)
        {
            if (s[l++] != s[r--])
                return 0;
        }
        return 1;
    }
};