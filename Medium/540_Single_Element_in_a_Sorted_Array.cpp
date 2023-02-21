class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int l = 0, r = n - 1;
        int mid = (l + r) / 2;
        while (r > l)
        {

            if (mid > 0 && mid < n - 1 && nums[mid] != nums[mid - 1] && nums[mid + 1] != nums[mid])
                break;
            else if (mid > 0 && nums[mid] == nums[mid - 1])
            {
                if (mid % 2 == 1)
                    l = mid + 1;
                else
                    r = mid;
            }
            else if (mid < n - 1 && nums[mid] == nums[mid + 1])
            {
                if (mid % 2 == 1)
                    r = mid - 1;
                else
                    l = mid;
            }
            mid = (l + r) / 2;
        }
        return nums[mid];
    }
};