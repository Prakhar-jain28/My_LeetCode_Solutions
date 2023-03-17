class Solution
{
public:
    static bool func(string a, string b)
    {
        if (a.size() == b.size())
            return (a >= b) ? 0 : 1;
        else
            return (a.size() > b.size()) ? 0 : 1;
    }

    string kthLargestNumber(vector<string> &nums, int k)
    {
        sort(nums.begin(), nums.end(), func);
        return nums[nums.size() - k];
    }
};

for(int i =0 ; i < ; i++; i++)
{
    priority_queue<int> pq;
    for(int j = 0 ; j < n ; j++)
    {
        
    }
    if(_INTEGRAL_MAX_BITS)
    {

    }
}