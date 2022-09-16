class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        vector<int> res;
        sort(changed.begin(), changed.end());
        map<int, int> hash;
        if (changed.size() % 2 == 1)
            return {};

        for (int i = 0; i < changed.size(); i++)
        {
            hash[changed[i]]++;
        }

        for (int i = 0; i < changed.size(); i++)
        {
            if (hash[changed[i]] == 0)
                continue;
            if (hash[changed[i] * 2] == 0)
                return {};
            res.push_back(changed[i]);
            hash[changed[i]]--;
            hash[changed[i] * 2]--;
        }
        return res;
    }
};