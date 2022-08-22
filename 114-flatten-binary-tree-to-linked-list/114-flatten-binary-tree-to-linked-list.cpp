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
    TreeNode* node=NULL;
    void flatten(TreeNode* root) {
//         if(root==NULL)return;
//         flatten(root->right);
//         flatten(root->left);
//         root->right=node;
//         root->left=NULL;
//         node=root;
        
        ///using stack
          if(root==NULL)return;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode* x=s.top();
            s.pop();
            if(x->right){
                s.push(x->right);
            }
            if(x->left){
                s.push(x->left);
            }
            if(!s.empty()){
                x->right=s.top();
            }
            x->left=NULL;
        }
        
    }
};