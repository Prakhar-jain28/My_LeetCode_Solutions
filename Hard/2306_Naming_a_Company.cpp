class Solution
{
public:
    long long distinctNames(vector<string> &ideas)
    {
        unordered_set<string> map[26];
        for (int i = 0; i < ideas.size(); i++)
        {
            map[ideas[i][0] - 'a'].insert(ideas[i].substr(1));
        }
        long long int ans = 0;
        for (int i = 0; i < 25; i++)
        {
            for (int j = i + 1; j < 26; j++)
            {
                long long int common = 0;
                for (auto &x : map[i])
                {
                    if (map[j].count(x))
                        common++;
                }
                ans += 2 * (map[i].size() - common) * (map[j].size() - common);
            }
        }
        return ans;
    }
};