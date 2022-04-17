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
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        if (!root) {
            return nullptr;
        }
        TreeNode* left = increasingBST(root->left);
        TreeNode* right = increasingBST(root->right);
        root->left = nullptr;
        root->right = right;
        if (!left) {
            return root;
        }
        TreeNode* iter = left;
        while (iter && iter->right) {
            iter = iter->right;
        }
        iter->right = root;
        return left;
        
    }
};