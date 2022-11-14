class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        string str;
        solve(n, res, str, n, 0);
        return res;
    }

    void solve(int n, vector<string> &res, string str, int f, int b)
    {
        if (str.size() == 2 * n)
        {
            res.push_back(str);
            return;
        }
        if (f > 0)
            solve(n, res, str + "(", f - 1, b + 1);
        if (b > 0)
            solve(n, res, str + ")", f, b - 1);
    }
};