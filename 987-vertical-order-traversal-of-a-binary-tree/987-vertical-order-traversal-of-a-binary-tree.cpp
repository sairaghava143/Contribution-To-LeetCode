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
    map<int,map<int,multiset<int>>>m;
    void solve(TreeNode* root,int col,int row){
        if(root==NULL)return;
        m[col][row].insert(root->val);
        solve(root->left,col-1,row+1);
        solve(root->right,col+1,row+1);     
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        ///dfs
        solve(root,0,0);
        vector<vector<int>>v;
        for(auto m1:m){
            vector<int>ans;
            for(auto m2:m1.second){
                for(auto m3:m2.second){
                    ans.push_back(m3);
                }
            }
            v.push_back(ans);
        }
        return v;
        
    }
};