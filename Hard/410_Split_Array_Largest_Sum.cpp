class Solution
{
public:
    int splitArray(vector<int> &nums, int m)
    {
        int sum = 0;
        int max = INT_MIN;
        for (int element : nums)
        {
            sum += element;
            max = std::max(max, element);
        }
        int left = max;
        int right = sum;
        int splits = 0;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (minsubarr(nums, mid) <= m)
            {
                right = mid - 1;
                splits = mid;
            }
            else
                left = mid + 1;
        }
        return splits;
    }

    int minsubarr(vector<int> &nums, int mid)
    {
        int currsum = 0;
        int splits = 0;
        for (int element : nums)
        {
            if (currsum + element <= mid)
                currsum += element;
            else
            {
                currsum = element;
                splits++;
            }
        }
        return splits + 1;
    }
};
