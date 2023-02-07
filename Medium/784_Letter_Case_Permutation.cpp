class Solution
{
public:
    void solve(vector<string> &res, string str, string s, int idx)
    {
        if (idx == s.size())
        {
            res.push_back(str);
            return;
        }
        if ('a' <= s[idx] && s[idx] <= 'z')
        {
            str += s[idx];
            solve(res, str, s, idx + 1);
            str.pop_back();
            str += toupper(s[idx]);
            solve(res, str, s, idx + 1);
        }
        else if ('A' <= s[idx] && s[idx] <= 'Z')
        {
            str += s[idx];
            solve(res, str, s, idx + 1);
            str.pop_back();
            str += tolower(s[idx]);
            solve(res, str, s, idx + 1);
        }
        else
        {
            str += s[idx];
            solve(res, str, s, idx + 1);
        }
    }

    vector<string> letterCasePermutation(string s)
    {
        vector<string> res;
        string str;
        solve(res, str, s, 0);
        return res;
    }
};
