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
    void dfs(int &count,int maxval,TreeNode* root){
        if(root==NULL)return;
        if(root->val>=maxval){
            count++;
        }
        maxval=max(maxval,root->val);
        dfs(count,maxval,root->left);
        dfs(count,maxval,root->right);
        // return;

        
    }
    int goodNodes(TreeNode* r,int ma=-10000) {
        //dfs approach
        // int maxval=INT_MIN;
        // int count=0;
        //  dfs(count,maxval,root);
        // return count;
        
        //similar approach
        
        return r?goodNodes(r->left,max(ma,r->val))+goodNodes(r->right,max(ma,r->val))+(r->val>=ma):0;
    }
};