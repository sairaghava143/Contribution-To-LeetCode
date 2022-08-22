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
      int max_straight=max(max(left,right)+root->val,root->val);
        int max_case=max(max_straight,left+right+root->val);
        
        ans=max(ans,max_case);
        return max_straight;
    }
    
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
     maxsum(root,ans);
        return ans;
    }
};
// class Solution {
//     int maxPathSum_util(TreeNode *root,int &result)
//     {
//         if(!root)
//             return 0;
        
//         int left = maxPathSum_util(root->left,result);
//         int right = maxPathSum_util(root->right,result);
        
//         int max_straight = max(max(left,right)+root->val, root->val);
//         int max_caseVal = max(max_straight,left+right+root->val);
//         result = max(max_caseVal,result);
        
//         return max_straight;
//     }
// public:
//     int maxPathSum(TreeNode* root) {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
        
//         int result = INT_MIN;
//         maxPathSum_util(root,result);
//         return result; 
//     }
// };