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
    
    unordered_map<int, int>m;
    void dfs(TreeNode* root)
    {
        if(!root) return;
        else m[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int>res;
        int tmax=-1;
        dfs(root);
        for(auto e:m)
        {
            if(e.second==tmax) res.push_back(e.first);
            else if(e.second>tmax){
                tmax=e.second;
                res={e.first};
            }
        }
        return res;
    }
};