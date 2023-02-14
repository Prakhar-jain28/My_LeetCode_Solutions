class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<string, int> hash;
        for (int i = 0; i < s.size(); i++)
        {
            hash[s.substr(i, 10)]++;
        }

        vector<string> res;

        for (auto it : hash)
        {
            if (it.second > 1)
                res.push_back(it.first);
        }
        return res;
    }
};