class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        vector<int> hash1(26);
        vector<int> hash2(26);
        for (int i = 0; i < ransomNote.length(); i++)
        {
            hash1[ransomNote[i] - 'a']++;
        }
        for (int i = 0; i < magazine.length(); i++)
        {
            hash2[magazine[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (hash1[i] > hash2[i])
                return 0;
        }
        return 1;
    }
};