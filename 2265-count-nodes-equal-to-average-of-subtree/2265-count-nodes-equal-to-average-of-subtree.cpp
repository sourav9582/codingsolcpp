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
    
    int count=0;
    pair<int,int>help(TreeNode* root,int &count)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        pair<int,int>l=help(root->left,count);
        pair<int,int>r=help(root->right,count);
        int nodes=l.first+r.first+1;
        int sum=l.second+r.second+root->val;
        if(sum/nodes==root->val)
        {
            count++;
        }
        return {nodes,sum};
    }
    
    
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        help(root,count);
        return count;
    }
};