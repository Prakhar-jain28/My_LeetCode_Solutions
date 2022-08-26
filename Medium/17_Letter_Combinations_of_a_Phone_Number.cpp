class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.size() == 0)
            return ans;

        unordered_map<char, string> hash;
        hash['2'] = "abc";
        hash['3'] = "def";
        hash['4'] = "ghi";
        hash['5'] = "jkl";
        hash['6'] = "mno";
        hash['7'] = "pqrs";
        hash['8'] = "tuv";
        hash['9'] = "wxyz";

        string s;
        func(hash, ans, 0, digits, s);
        return ans;
    }

    void func(unordered_map<char, string> &hash, vector<string> &ans, int idx, string digits, string s)
    {
        if (idx == digits.size())
        {
            ans.push_back(s);
            return;
        }
        for (int i = 0; i < hash[digits[idx]].size(); i++)
        {
            string str = s + hash[digits[idx]][i];
            func(hash, ans, idx + 1, digits, str);
        }
    }
};