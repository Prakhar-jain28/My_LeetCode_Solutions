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
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return max(solve(root->left) + solve(root->right), max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
    }

    int solve(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        else
            return max(solve(root->left), solve(root->right)) + 1;
    }
};