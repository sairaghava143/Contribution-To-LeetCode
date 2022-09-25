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
    void help(TreeNode*root,int &val,int &mindiff){
        if(!root)return;
        help(root->left,val,mindiff);
        if(val!=-1){
                    mindiff=min(mindiff,abs(root->val-val));

            
        }
        val=root->val;
        help(root->right,val,mindiff);

    }
    int getMinimumDifference(TreeNode* root) {
        int mindiff=INT_MAX,val=-1;
        help(root,val,mindiff);
        return mindiff;
    }
};