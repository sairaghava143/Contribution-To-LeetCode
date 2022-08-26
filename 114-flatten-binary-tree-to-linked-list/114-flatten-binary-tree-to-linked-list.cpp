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
    void preorder(TreeNode* root,vector<int>&v){
        if(root==NULL)return ;
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        vector<int>v;
        preorder(root,v);
       
        int rootindex=1;
        while(rootindex<v.size()){
            root->left=NULL;
            root->right=new TreeNode(v[rootindex++]);
            root=root->right;
        }
        
    }
};