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
    int pathSum(TreeNode* root, int target) {
        //bruteforce approach dfs
        
        if(!root)return 0;
        return sumup(0,root,target)+pathSum(root->left,target)+pathSum(root->right,target);
    }
    int sumup(long long currsum,TreeNode* root,int target){
        if(!root)return 0;
        currsum+=root->val;
        int count=(currsum==target);
        
        count+=sumup(currsum,root->left,target);
        count+=sumup(currsum,root->right,target);

        return count;
    }
};