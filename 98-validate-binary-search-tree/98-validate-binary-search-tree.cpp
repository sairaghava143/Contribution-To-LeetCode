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
    bool isValidBST(TreeNode* root,long long min=LLONG_MIN,long long max=LLONG_MAX) {
        if(root==NULL)return true;
        bool left=isValidBST(root->left,min,root->val);
        bool right=isValidBST(root->right,root->val,max);
        if(left && right && root->val>min && root->val<max)return true;
        return false;
        
    }
};