/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        if(root->val==p->val ||root->val==q->val)return root;
        TreeNode* left=NULL;TreeNode* right=NULL;
        if(root->val>p->val ||root->val >q->val){
            left=lowestCommonAncestor(root->left,p,q);
        }
        if(root->val<p->val ||root->val <q->val){
            right=lowestCommonAncestor(root->right,p,q);
        }
        if(left==NULL && right==NULL)return NULL;
        else if(left && right==NULL)return left;
        else if(left==NULL && right)return right;
        return root;
    }
};