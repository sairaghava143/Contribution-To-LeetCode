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
     TreeNode* build(vector<int>&inorder,vector<int>&postorder,int &rootindex,int left,int right){
        if(left>right)return NULL;
     
        
        TreeNode* root=new TreeNode(postorder[rootindex--]);
        int inindex=find(inorder.begin(),inorder.end(),root->val)-inorder.begin();
                 root->right=build(inorder,postorder,rootindex,inindex+1,right);

        root->left=build(inorder,postorder,rootindex,left,inindex-1);
        return root;  

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int rootindex=n-1;
        return build(inorder,postorder,rootindex,0,n-1);
        
    }
   
};