class Solution
{
public:
    vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<int> res;

        int evensum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
                evensum += nums[i];
        }

        for (int i = 0; i < queries.size(); i++)
        {
            if ((nums[queries[i][1]] + queries[i][0]) % 2 == 0)
            {
                nums[queries[i][1]] += queries[i][0];
                if (queries[i][0] % 2 == 0)
                {
                    evensum = evensum + queries[i][0];
                }
                else
                {
                    evensum += nums[queries[i][1]];
                }
                // nums[queries[i][1]] += queries[i][0];
            }
            else
            {
                if (nums[queries[i][1]] % 2 == 0)
                    evensum -= nums[queries[i][1]];
                nums[queries[i][1]] += queries[i][0];
            }
            res.push_back(evensum);
        }
        return res;
    }
};

// 1 2 3 4
// 2 2 3 4
// 2 -1 3 4
// -2 -1 3 4
// -2 -1 3 6
