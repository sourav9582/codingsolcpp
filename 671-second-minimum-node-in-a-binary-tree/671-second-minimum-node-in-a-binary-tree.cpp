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

    void traverse(TreeNode*root, set<int>&s)
    {
        if(root==NULL)
        { return;
        }
        s.insert(root->val);
        traverse(root->left,s);
        traverse(root->right,s);
        
    }
    
    
    
    public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        traverse(root,s);
        if(s.size()<2)
        {
            return -1;
        }
        auto it =s.begin();
        it++;
        return *it;
    }
};