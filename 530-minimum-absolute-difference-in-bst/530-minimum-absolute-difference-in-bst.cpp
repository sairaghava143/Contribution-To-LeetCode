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
    void help(TreeNode* root,int &ans,vector<int>&v){
        if(!root)return;
        help(root->left,ans,v);
        v.push_back(root->val);
        help(root->right,ans,v);
    }
    int getMinimumDifference(TreeNode* root) {
        int ans=INT_MAX;
        vector<int>v;
        help(root,ans,v);
        int n=v.size();
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans=min(ans,abs(v[i]-v[j]));
            }
        }
        }
        return ans;
    }
};