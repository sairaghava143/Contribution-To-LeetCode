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
    TreeNode *build(vector<int>& inorder, vector<int>& postorder,int ins,int ine,int poss,int pose){
        if(ins>ine)return NULL;
        int rootdata=postorder[pose];
        int rootindex;
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==rootdata){
                rootindex=i;
                break;
            }
        }
        int inls=ins;
        int inle=rootindex-1;
        int inrs=rootindex+1;
        int inre=ine;
        
        int posls=poss;
        int posle=inle-inls+posls;
        int posrs=posle+1;
            int posre=pose-1;
        TreeNode* root=new TreeNode(rootdata);
        root->left=build(inorder,postorder,inls,inle,posls,posle);
        root->right=build(inorder,postorder,inrs,inre,posrs,posre);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        return build(inorder,postorder,0,n-1,0,n-1);
    }
};