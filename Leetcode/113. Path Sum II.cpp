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
    void findpath(TreeNode* root, int ts, vector<vector<int>>&ans, vector<int>temp, int sum){
        if(root==NULL){
            return;
        }
        temp.push_back(root->val);
        sum+=root->val;
        if(sum==ts and root->left==NULL and root->right==NULL){
            ans.push_back(temp);
            return;
        }
        findpath(root->left, ts, ans, temp, sum);
        findpath(root->right, ts, ans, temp, sum);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;
        findpath(root,targetSum,ans,temp,sum);
        return ans;
    }
};