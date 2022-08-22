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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
                if(!root)return v;

        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
                        vector<int>p;
int size=q.size();
        for(int i=0;i<size;i++){
            auto node=q.front();
            q.pop();
            p.push_back(node.first->val);
            if(node.first->left){
                q.push({node.first->left,node.second-1});
            }
            if(node.first->right){
                q.push({node.first->right,node.second+1});
            }
        }
            v.push_back(p);
        }
        return v;
    }
};