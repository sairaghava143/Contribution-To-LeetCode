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
    int inorder(TreeNode* root,int &k){
        if(root==NULL)return 0;
        int left=inorder(root->left,k);
        if(k--==0){
            return root->val;
        }
          int right=inorder(root->right,k);
        return max(left,right);
    }
    int kthSmallest(TreeNode* root, int k) {
        k--;
        return inorder(root,k);
    }
};