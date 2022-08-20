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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>>m;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            map<int,multiset<int>>mapset;
            for(int i=0;i<size;i++){
                TreeNode *node=q.front().first;
                int col=q.front().second;
                q.pop();
                mapset[col].insert(node->val);
                if(node->left){
                    q.push({node->left,col-1});
                    
                }
                if(node->right){
                    q.push({node->right,col+1});
                    
                }
            }
            for(auto it:mapset){
                for(auto it2:it.second){
                    m[it.first].push_back(it2);
                }
            }
        }
        vector<vector<int>>v;
        for(auto it:m){
      
                v.push_back(it.second);
         
        }
        return v;
    }
};