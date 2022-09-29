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
    void help1(TreeNode* root,int &sum){
        if(!root)return;
        sum+=root->val;
        help1(root->left,sum);
        help1(root->right,sum);
    }
    void help(TreeNode* root){
        if(!root)return;
        int left=0,right=0;
        help1(root->left,left);
        help1(root->right,right);
        root->val=abs(left-right);
        help(root->left);
        help(root->right);

    }
    void help3(TreeNode* root,int &ans){
        if(!root)return;
        ans+=root->val;
        help3(root->left,ans);
        help3(root->right,ans);
    }
    int findTilt(TreeNode* root) {
        help(root);
        int ans=0;
        help3(root,ans);
        return ans;
    }
};