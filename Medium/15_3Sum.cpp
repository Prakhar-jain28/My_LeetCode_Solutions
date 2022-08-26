class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                int a = nums[i] * (-1), b = 0, c = 0;
                int hi = nums.size() - 1, low = i + 1;
                while (low < hi)
                {
                    if ((nums[hi] + nums[low]) == a)
                    {
                        vector<int> temp;
                        temp.push_back(nums[hi]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[i]);
                        result.push_back(temp);

                        while (low < hi && nums[low] == nums[low + 1])
                            low++;
                        while (low < hi && nums[hi] == nums[hi - 1])
                            hi--;
                        low++;
                        hi--;
                    }
                    else if ((nums[hi] + nums[low]) > a)
                    {
                        hi--;
                    }
                    else
                    {
                        low++;
                    }
                }
            }
        }
        return result;
    }
};