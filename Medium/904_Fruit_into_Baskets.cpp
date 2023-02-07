class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {

        unordered_map<int, int> map;
        int idx = 0, res = 0;
        for (int i = 0; i < fruits.size(); i++)
        {
            map[fruits[i]]++;
            if (map.size() <= 2)
                res = max(res, i - idx + 1);
            else
            {
                map[fruits[idx]]--;
                if (map[fruits[idx]] == 0)
                {
                    map.erase(fruits[idx]);
                }
                idx++;
            }
        }
        return res;
    }
};