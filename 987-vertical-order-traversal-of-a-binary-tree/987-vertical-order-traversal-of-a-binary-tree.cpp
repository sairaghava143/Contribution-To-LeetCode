// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         map<int,vector<int>>m;
//         queue<pair<TreeNode*,int>>q;
//         q.push({root,0});
//         while(!q.empty()){
//             auto node=q.front();
//             q.pop();
//             int x=node.second;
//             m[x].push_back(node.first->val);
//             if(node.first->left){
//                 q.push({node.first->left,x-1});
//             }
//             if(node.first->right){
//                 q.push({node.first->right,x+1});
//             }
//         }
//         vector<vector<int>>v;
//         for(auto it:m){
//             vector<int>ans=it.second;
//             sort(ans.begin(),ans.end());
//             v.push_back(ans);
//         }
//         return v;
//     }
// };
class Solution {
    map<int,map<int,multiset<int>>> mymap;
    void solve(TreeNode *curr,int col,int row)
    {
        if(!curr)
            return;
        
        mymap[col][row].insert(curr->val);
        solve(curr->left,col-1,row+1);
        solve(curr->right,col+1,row+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root,0,0);
        
        vector<vector<int>> ans;
        for(auto m1: mymap)
        {    
            ans.push_back(vector<int>());
            for(auto m2: m1.second)
            {
                for(auto m3: m2.second)
                    ans.back().push_back(m3);
            }
        }
        return ans;
    }
};