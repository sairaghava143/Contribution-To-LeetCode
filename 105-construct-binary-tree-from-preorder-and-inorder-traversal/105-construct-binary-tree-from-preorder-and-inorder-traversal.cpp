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
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootindex=0;
        return build(preorder,inorder,rootindex,0,inorder.size()-1);
    }
    
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int &rootindex,int left,int right){
        if(left>right)return NULL;
        int pivot=left;
        while(inorder[pivot]!=preorder[rootindex])pivot++;
        rootindex++;
        TreeNode* root=new TreeNode(inorder[pivot]);

        root->left=build(preorder,inorder,rootindex,left,pivot-1);
        root->right=build(preorder,inorder,rootindex,pivot+1,right);
        return root;

    }
    
};