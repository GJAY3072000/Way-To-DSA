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
    int sumNumbers(TreeNode* root) {
        int ans=0;
        sumchilds(root,0, ans);
        return ans;
    }
    
    void sumchilds(TreeNode* root, int sum, int & ans){
        if(!root) return;
        sum = sum*10+root->val;
        root->val=sum;
        if(!root->left && !root->right) ans+=sum;
        sumchilds(root->left,sum, ans);
        sumchilds(root->right,sum, ans);
        
    }
};