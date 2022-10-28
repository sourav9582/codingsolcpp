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
        vector<int>sol;
        post(root,sol);
        return sol;
    }
private:
    void post(TreeNode* root, vector<int>&sol)
    {
        if(!root) return;
        post(root->left,sol);
        post(root->right,sol);
        sol.push_back(root->val);
    }
};