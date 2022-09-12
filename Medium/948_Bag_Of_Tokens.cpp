class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        int i = 0;
        int j = tokens.size() - 1;
        sort(tokens.begin(), tokens.end());
        int score = 0;
        while (i <= j)
        {
            if (power >= tokens[i])
            {
                power -= tokens[i];
                score++;
                i++;
            }
            else if (power + tokens[j] >= tokens[i] && score >= 1 && j != i)
            {
                score--;
                power += tokens[j];
                j--;
            }
            else
                break;
        }
        return score;
    }
};