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
    bool helper(TreeNode* rt, TreeNode* sr) {
        if(!rt and !sr) {
            return true;
        }
        
        if(!rt or !sr) {
            return false;
        }
        
        return (rt -> val == sr -> val) and helper(rt -> left, sr -> left) and helper(rt -> right, sr -> right);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* sr) {
        if(!root) {
            return false;
        }
        
        if(!sr) {
            return true;
        }
        
        return helper(root, sr) || isSubtree(root -> left, sr) || isSubtree(root -> right, sr);
    }
};