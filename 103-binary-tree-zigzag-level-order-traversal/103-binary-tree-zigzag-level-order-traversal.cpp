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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        vector<vector<int>>v;
        queue<pair<TreeNode*,int>>q;
        bool check=1;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                auto node=q.front();
                q.pop();
                TreeNode *t=node.first;
                temp.push_back(t->val);
                if(t->left){
                    q.push({t->left,node.second-1});
                }
                if(t->right){
                    q.push({t->right,node.second+1});
                }

                
                
            }
            if(check){
                v.push_back(temp);
                check=false;
            }else{
                reverse(temp.begin(),temp.end());
                v.push_back(temp);
                check=true;
            }
        }
        return v;
    }
};