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
    bool check(TreeNode *p, TreeNode *q)
    {
        if (p == NULL && q == NULL)
            return 1;
        if (p == NULL || q == NULL)
            return 0;
        if (p->val != q->val)
            return 0;
        return check(p->left, q->right) && check(p->right, q->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        // if(root->left == NULL && root->right==NULL)
        //     return 1;
        // if(root->left == NULL || root->right==NULL)
        //     return 0;
        // if(root->left != root->right)
        if (check(root->left, root->right))
            return 1;
        else
            return 0;
    }
};