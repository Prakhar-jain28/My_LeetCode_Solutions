class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        unordered_map<int, int> map;
        int ans = 0;
        for (int i = 0; i < nums4.size(); i++)
        {
            for (int j = 0; j < nums3.size(); j++)
            {
                int temp = nums4[i] + nums3[j];
                temp = temp * (-1);
                map[temp]++;
            }
        }

        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (map[nums1[i] + nums2[j]])
                    ans += map[nums1[i] + nums2[j]];
            }
        }

        return ans;
    }
};