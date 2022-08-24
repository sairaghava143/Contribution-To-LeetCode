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
int ans;
class node{
    public:
    bool bst;
    int min;
    int max;
    int maxval;
    node(){
        bst=true;
        min=INT_MAX;
        max=INT_MIN;
        maxval=0;
            
    }
};
class Solution {
public:
    node maxsum(TreeNode* root){
        if(root==NULL){
            return node();
        }
        node p;
        node left=maxsum(root->left);
        node right=maxsum(root->right);
        if(left.bst && right.bst && root->val<right.min && root->val>left.max){
            p.bst=true;
            p.max=max(root->val,right.max);
            p.min=min(root->val,left.min);
            p.maxval=left.maxval+right.maxval+root->val;
        }else{
            p.bst=false;
            p.maxval=max(left.maxval,right.maxval);
        }
        ans=max(ans,p.maxval);
        return p;
    }
    int maxSumBST(TreeNode* root) {
        ans=0;
        maxsum(root);
        return ans;
    }
};