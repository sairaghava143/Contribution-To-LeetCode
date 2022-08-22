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
        int ans=1;
        if(root==NULL)return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
       int count=0;
        while(!q.empty()){
          int size=q.size();
                            count++;

            for(int i=0;i<size;i++){
                auto node=q.front();
                q.pop();
                ans=max(ans,node.second);
            if(node.first->left){
                q.push({node.first->left,node.second-1});
            }
             if(node.first->right){
                q.push({node.first->right,node.second+1});
            }
            }
                
            
        }
        return count;
    }
};