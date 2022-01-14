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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        if(root)st.push(root);
        vector<int> ans;
        while(st.size())
        {
            auto p = st.top();
            if(p == nullptr)
            {
                st.pop();
                ans.push_back(st.top()->val);
                st.pop();
                continue;
            }
            st.push(nullptr);
            if(p->right)st.push(p->right);
            if(p->left)st.push(p->left);
        }
        return ans;
        
        
    }
};