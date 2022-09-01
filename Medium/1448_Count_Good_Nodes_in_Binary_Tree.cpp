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
    int res = 0;
    int goodNodes(TreeNode *root)
    {
        solve(root, INT_MIN);
        return res;
    }

    void solve(TreeNode *root, int mx)
    {
        if (root == NULL)
            return;
        if (root->val >= mx)
        {
            mx = max(mx, root->val);
            res++;
        }

        solve(root->left, mx);
        solve(root->right, mx);
    }
};