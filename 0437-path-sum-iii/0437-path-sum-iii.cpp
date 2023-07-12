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
        int count=sumup(0,root,target);
        int leftcount=pathSum(root->left,target);
        int rightcount=pathSum(root->right,target);
        return count+rightcount+leftcount;
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