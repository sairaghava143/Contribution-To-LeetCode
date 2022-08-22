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
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int pres,int pree,int ins,int ine){
        if(ins>ine)return NULL;
        int rootdata=preorder[pres];
        int rootindex;
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==rootdata){
                rootindex=i;
                break;
            }
        }
        
        int prels=pres+1;
        int inols=ins;
       int inole=rootindex-1;
         int prele =inole-inols+prels;
        
        int prers=prele+1;
        int prere=pree;
        int inors=rootindex+1;
        int inore=ine;
        
        TreeNode * root=new TreeNode(rootdata);
        root->left=build(preorder,inorder,prels,prele,inols,inole);
        root->right=build(preorder,inorder,prers,prere,inors,inore);
        return root; 
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        return build(preorder,inorder,0,n-1,0,n-1);
        
    }
};