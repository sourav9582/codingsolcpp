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
    
    
    void help(TreeNode* root,vector<int>&v)
    {
        if(root)
        {
            v.push_back(root->val);
            if(root->left)
            {
                help(root->left,v);
            }
            if(root->right)
            {
                help(root->right,v);
            }
            
        }
        return;
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        help(root,v);
        return v;
        
    }
};