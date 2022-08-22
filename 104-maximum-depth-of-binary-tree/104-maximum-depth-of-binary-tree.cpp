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
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        queue<pair<TreeNode*,int>>s;
        s.push({root,1});
        int count=1;
        while(!s.empty()){
            auto node=s.front();
            s.pop();
        count=max(count,node.second);
            if(node.first->left){
                s.push({node.first->left,node.second+1});
            }
            if(node.first->right){
                s.push({node.first->right,node.second+1});
            }
        }
        return count;
    }
};