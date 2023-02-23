class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        // priority_queue<int> scores;
        int n = score.size();
        vector<pair<int, int>> combine;
        for (int i = 0; i < score.size(); i++)
        {
            // scores.push(score[i]);
            combine.push_back({score[i], i});
        }
        sort(combine.begin(), combine.end());
        vector<string> res(score.size(), "");

        int j = 1;

        for (int i = score.size() - 1; i >= 0; i--)
        {
            if (j == 1)
            {
                res[combine[i].second] = "Gold Medal";
                j++;
            }
            else if (j == 2)
            {
                res[combine[i].second] = "Silver Medal";
                j++;
            }
            else if (j == 3)
            {
                res[combine[i].second] = "Bronze Medal";
                j++;
            }
            else
            {
                res[combine[i].second] = to_string(j);
                j++;
            }
        }
        // reverse(res.begin(),res.end());
        return res;
    }
};