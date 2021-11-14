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
    void solution(TreeNode* curr){
        if(curr==NULL)
            return;
        solution(curr->left);
        solution(curr->right);
        TreeNode* temp;
        temp=curr->left;
        curr->left=curr->right;
        curr->right=temp;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        solution(root);
        return root;
        
    }
};