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
    bool isbst(TreeNode *root, TreeNode *low, TreeNode *high)
    {
        if (root == nullptr)
            return 1;

        if ((low != nullptr && root->val <= low->val) || (high != nullptr && root->val >= high->val))
            return 0;

        return isbst(root->right, root, high) && isbst(root->left, low, root);
    }

    bool isValidBST(TreeNode *root)
    {

        return isbst(root, nullptr, nullptr);
    }
};