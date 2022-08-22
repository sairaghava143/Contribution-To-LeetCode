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
    int maxsum(TreeNode* root,int &ans){
        if(root==NULL)return 0;
        int left=maxsum(root->left,ans);
        int right=maxsum(root->right,ans);
        int max_straight=max(root->val,max(left,right)+root->val);
        ans=max({ans,left+right+root->val,max_straight});
        return max_straight;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        maxsum(root,ans);
        return ans;
            
    }
};