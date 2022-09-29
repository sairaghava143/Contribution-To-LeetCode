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
    int help1(TreeNode* root){
        if(!root)return 0;
    
       
      return  help1(root->left)+ help1(root->right)+root->val;
    }
    int help(TreeNode* root){
        if(!root)return 0;
        root->val=abs(help1(root->left)-help1(root->right));
       
      return  help(root->left)+ help(root->right)+root->val;

    }
    int findTilt(TreeNode* root) {
   
     
        
        return help(root);
    }
};