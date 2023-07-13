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
    void dfs(vector<int>&v,TreeNode* root,int level){
        if(!root)return;
        
        if(v.size()<level){
            v.push_back(root->val);
        }
        
        dfs(v,root->right,level+1);
        dfs(v,root->left,level+1);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        //bfs approach n,n
//         vector<int>v;
//         if(!root)return v;
        
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//             int n=q.size();
//             for(int i=0;i<n;i++){
//                 TreeNode* temp=q.front();
//                 q.pop();
//                 if(i==n-1)v.push_back(temp->val);
//                 if(temp->left)q.push(temp->left);
//                 if(temp->right)q.push(temp->right);

                
//             }
//         }
//         return v;
        
        // dfs approach n,h
        if(!root)return {};
        vector<int>v;
        dfs(v,root,1);
        return v;
    }
};