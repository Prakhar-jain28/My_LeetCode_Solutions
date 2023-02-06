class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        unordered_map<char, int> hash;
        hash['a'] = 2;
        hash['b'] = 3;
        hash['c'] = 3;
        hash['d'] = 2;
        hash['e'] = 1;
        hash['f'] = 2;
        hash['g'] = 2;
        hash['h'] = 2;
        hash['i'] = 1;
        hash['j'] = 2;
        hash['k'] = 2;
        hash['l'] = 2;
        hash['m'] = 3;
        hash['n'] = 3;
        hash['o'] = 1;
        hash['p'] = 1;
        hash['q'] = 1;
        hash['r'] = 1;
        hash['s'] = 2;
        hash['t'] = 1;
        hash['u'] = 1;
        hash['v'] = 3;
        hash['w'] = 1;
        hash['x'] = 3;
        hash['y'] = 1;
        hash['z'] = 3;
        hash['A'] = 2;
        hash['B'] = 3;
        hash['C'] = 3;
        hash['D'] = 2;
        hash['E'] = 1;
        hash['F'] = 2;
        hash['G'] = 2;
        hash['H'] = 2;
        hash['I'] = 1;
        hash['J'] = 2;
        hash['K'] = 2;
        hash['L'] = 2;
        hash['M'] = 3;
        hash['N'] = 3;
        hash['O'] = 1;
        hash['P'] = 1;
        hash['Q'] = 1;
        hash['R'] = 1;
        hash['S'] = 2;
        hash['T'] = 1;
        hash['U'] = 1;
        hash['V'] = 3;
        hash['W'] = 1;
        hash['X'] = 3;
        hash['Y'] = 1;
        hash['Z'] = 3;
        vector<string> res;
        for (int i = 0; i < words.size(); i++)
        {
            int prev = hash[words[i][0]];
            bool flag = 0;
            for (int j = 1; j < words[i].size(); j++)
            {
                if (hash[words[i][j]] != prev)
                {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                res.push_back(words[i]);
        }
        return res;
    }
};