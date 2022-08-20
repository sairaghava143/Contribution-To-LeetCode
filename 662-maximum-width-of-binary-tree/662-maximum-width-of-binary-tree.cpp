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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        long long ans=INT_MIN;
        while(q.size()){
            int size=q.size();
            long long start=q.front().second;
            long long end=q.back().second;
            ans=max(ans,end-start+1);
            for(int i=0;i<size;i++){
                auto node=q.front();
                q.pop();
                long long index=node.second;
                TreeNode *m=node.first;
                if(m->left){
                    q.push({m->left,2*index+1});
                }
                 if(m->right){
                    q.push({m->right,2*index+2});
                }
                
            }
        }
        return ans;
    }
};