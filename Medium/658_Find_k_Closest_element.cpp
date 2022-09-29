class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int l = 0, r = arr.size() - k;
        int mid;
        while (l < r)
        {
            mid = (l + r) / 2;
            if (x - arr[mid] > arr[mid + k] - x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        vector<int> res;
        for (int i = l; i < l + k; i++)
        {
            res.push_back(arr[i]);
        }
        return res;
    }
};