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
    pair<int,int> diameter(TreeNode*root){
        if(root==NULL)return {0,0};
        pair<int,int>left=diameter(root->left);
        pair<int,int>right=diameter(root->right);
        int dia=max({left.second,right.second,left.first+right.first});
        return {max(left.first,right.first)+1,dia};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int>ans=diameter(root);
        return ans.second;
    }
};