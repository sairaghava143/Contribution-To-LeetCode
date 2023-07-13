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
    TreeNode* searchBST(TreeNode* root, int val) {
        //recurrsive approach
        // if(!root)return root;
        // if(root->val==val)return root;
        // else if(root->val>val)return searchBST(root->left,val);
        // else if(root->val<val)return searchBST(root->right,val);
        // else return nullptr;
        
        //optimized and normal approach
        
        while(root!=nullptr && root->val!=val){
            if(root->val>val){
                root=root->left;
            }else{
                root=root->right;
            }
        }
return root;
    }
};