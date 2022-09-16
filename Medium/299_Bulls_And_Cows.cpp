class Solution
{
public:
    string getHint(string secret, string guess)
    {
        vector<int> hash2(10, 0);
        int bulls = 0, cows = 0;
        for (int i = 0; i < secret.size(); i++)
        {
            if (secret[i] == guess[i])
                bulls++;
            hash2[guess[i] - '0']++;
        }

        for (int i = 0; i < secret.size(); i++)
        {
            if (hash2[secret[i] - '0'] != 0)
            {
                cows++;
                hash2[secret[i] - '0']--;
            }
        }
        string s = to_string(bulls) + "A" + to_string(cows - bulls) + "B";
        return s;
    }
};