/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* res;   
        queue<TreeNode*> q; 
        if(cloned)  q.push(cloned); 
        while(!q.empty()){
            int size = q.size(); 
            for(int i=0; i<size; i++){
                TreeNode* node = q.front(); q.pop();
                if(node->val == target->val)
                    res = node;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return res; 
    }
};