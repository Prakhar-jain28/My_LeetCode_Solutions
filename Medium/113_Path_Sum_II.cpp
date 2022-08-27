/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> res;
        vector<int> path;
        solve(root, targetSum, path, res);
        return res;
    }
    void solve(TreeNode *root, int sum, vector<int> &path, vector<vector<int>> &res)
    {
        if (root == NULL)
        {
            return;
        }
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL && sum == root->val)
        {
            res.push_back(path);
        }
        solve(root->left, sum - root->val, path, res);
        solve(root->right, sum - root->val, path, res);
        path.pop_back();
    }
};