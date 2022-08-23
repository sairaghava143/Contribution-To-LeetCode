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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())return NULL;

        int mid=(nums.size())/2;
        TreeNode* root=new TreeNode(nums[mid]);
        vector<int>v(nums.begin(),nums.begin()+mid);
        vector<int>v1(nums.begin()+mid+1,nums.end());

        root->left=sortedArrayToBST(v);
        root->right=sortedArrayToBST(v1);
        return root;
        
            
    }
};