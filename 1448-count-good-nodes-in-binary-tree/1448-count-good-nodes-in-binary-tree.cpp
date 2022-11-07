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
    
    void goody(TreeNode* root, int mx, int &c)
    {
        if(!root) return;
        if(mx<=root->val)
        {
            mx=root->val;
            c++;
        }
        goody(root->left,mx,c);
        goody(root->right,mx,c);
    }
    
    
    
    int goodNodes(TreeNode* root) {
        int c=0,mx=INT_MIN;
        goody(root,mx,c);
        return c;
    }
};