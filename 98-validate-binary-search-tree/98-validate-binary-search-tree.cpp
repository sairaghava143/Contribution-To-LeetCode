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
    bool helper(TreeNode* root,long long min=   LONG_LONG_MIN,long long max=LONG_LONG_MAX){
        if(root==NULL)return true;
        bool left=helper(root->left,min,root->val);
      bool right=  helper(root->right,root->val,max);
        if(left && right && root->val >min && root->val<max){
            return true;
        }else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        return helper(root);
    }
};