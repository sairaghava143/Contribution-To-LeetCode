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
    int idx=0;
    TreeNode* bstFromPreorder(vector<int>& preorder,int max=INT_MAX) {
        if(idx>=preorder.size()||preorder[idx]>max){
            return NULL;
        }
        auto root=new TreeNode(preorder[idx++]);
        root->left=bstFromPreorder(preorder,root->val);
        root->right=bstFromPreorder(preorder,max);
        return root;
    }
};