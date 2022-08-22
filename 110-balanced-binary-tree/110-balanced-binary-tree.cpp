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
    int height(TreeNode*root,int &ans){
        if(root==NULL)return 0;
        int left=height(root->left,ans);
        int right=height(root->right,ans);
        if(left-right>1 || right-left>1){
            if(ans){
                ans=0;
            }
        }
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        int ans=1;
        height(root,ans);
        return ans;
    }
};