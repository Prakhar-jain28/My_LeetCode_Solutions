class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < arr.size(); i++)
        {
            hash[arr[i]]++;
        }
        unordered_map<int, int> hashofhash;
        for (auto it : hash)
        {
            hashofhash[it.second]++;
        }
        for (auto it : hashofhash)
        {
            if (it.second > 1)
                return 0;
        }
        return 1;
    }
};