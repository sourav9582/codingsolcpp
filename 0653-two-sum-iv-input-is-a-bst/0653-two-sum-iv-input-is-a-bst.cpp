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
// 
// class Solution {
//     unordered_map<int, bool> m;
// public:
//     bool findTarget(TreeNode* root, int k) {
//         // reached the end of the line
//         if (!root) return false;
//         // we found a match!
//         if (m.find(k - root->val)) return true;
//         // flagging root->val as found
//         m[root->val] = true;
//         // recursive calls
//         return findTarget(root->left, k) || findTarget(root->right, k);
//     }
// };
class Solution {
    unordered_map<int, bool> m;
public:
    bool findTarget(TreeNode* root, int k) {
        return root && (m.find(k - root->val) != end(m) || (m[root->val] = true, false) || findTarget(root->left, k) || findTarget(root->right, k));
    }
};