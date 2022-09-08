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
    // map<int,map<int,multiset<int>>>m;
    // void solve(TreeNode* root,int col,int row){
    //     if(root==NULL)return ;
    //     m[col][row].insert(root->val);
    //     solve(root->left,col-1,row+1);
    //     solve(root->right,col+1,row+1);
    // }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        //bfs
        map<int,vector<int>>m;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            map<int,multiset<int>>mapset;
            for(int i=0;i<size;i++){
                auto node=q.front();
                q.pop();
                int col=node.second;
                mapset[col].insert(node.first->val);
                if(node.first->left){
                    q.push({node.first->left,col-1});
                }
                 if(node.first->right){
                    q.push({node.first->right,col+1});
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
        
        //dfs
        // solve(root,0,0);
        // vector<vector<int>>v;
        // for(auto it:m){
        //     vector<int>ans;
        //     for(auto it2:it.second){
        //         for(auto it3:it2.second){
        //             ans.push_back(it3);
        //         }
        //     }
        //     v.push_back(ans);
        // }
        // return v;
    }
};