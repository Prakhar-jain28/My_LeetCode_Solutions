class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {
        int n = nums.size();
        int mx = INT_MIN, mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 1)
                nums[i] = nums[i] * 2;
            mx = max(mx, nums[i]);
            mn = min(mn, nums[i]);
        }

        int ans = mx - mn;

        priority_queue<int> pq(nums.begin(), nums.end());

        while (pq.top() % 2 == 0)
        {
            int temp = pq.top();
            pq.pop();
            ans = min(ans, temp - mn);
            temp = temp / 2;
            mn = min(mn, temp);
            pq.push(temp);
        }
        ans = min(ans, pq.top() - mn);
        return ans;
    }
};