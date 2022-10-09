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
    
    
     vector<TreeNode*> inorder;
        void findinorder(TreeNode* root)
        {
            if(root==NULL)
                return;
            findinorder(root->left);
            inorder.push_back(root);
            findinorder(root->right);
        }
        TreeNode* buildtree(int start, int end)
        {
            if(start>end)
                return NULL;
            int mid=(start+end)/2;
            TreeNode* root=inorder[mid];
            root->left=buildtree(start,mid-1);
            root->right=buildtree(mid+1,end);
            return root;
        }
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL)
            return NULL;
        findinorder(root);
        int n=inorder.size();
        root=buildtree(0,n-1);
        return root;
    }
};