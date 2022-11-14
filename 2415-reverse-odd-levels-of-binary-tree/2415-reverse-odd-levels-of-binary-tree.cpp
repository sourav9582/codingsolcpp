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
    
    void heeelp(TreeNode* l,TreeNode*r, int level)
    {
        if(level%2==0)
            swap(l->val,r->val);
        if(!l->right && !l->left)return;
        if(!l->right && !l->left)return;
        heeelp(l->left,r->right,level+1);
        heeelp(l->right,r->left,level+1);
    }
    
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root || !root->left || !root->right) return root;
        heeelp(root->right,root->left,0);
        return root;
    }
};