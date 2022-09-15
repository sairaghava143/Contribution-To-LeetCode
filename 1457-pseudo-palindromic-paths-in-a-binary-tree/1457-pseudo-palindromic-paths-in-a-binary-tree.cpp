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
    int ans=0;
    unordered_map<int,int>m;
    void help(TreeNode*root){
        if(root==NULL)return;
        m[root->val]++;
        if(!root->left && !root->right){
            int odd=0;
            for(auto &it:m){
                if(it.second&1){
                    odd++;
                }
            }
            if(odd<=1)ans++;
        }
        help(root->left);
        help(root->right);
        m[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        help(root);
        return ans;
    }
};