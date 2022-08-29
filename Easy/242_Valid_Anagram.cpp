class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int hash1[26], hash2[26];
        for (int i = 0; i < 26; i++)
        {
            hash1[i] = 0;
            hash2[i] = 0;
        }
        for (int i = 0; i < s.size(); i++)
        {
            hash1[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            hash2[t[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (hash1[i] > hash2[i] || (hash1[i] == 0 && hash2[i] != 0))
                return 0;
        }
        return 1;
    }
};