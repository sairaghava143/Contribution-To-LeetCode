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
    void dfs(vector<int>&v,int level,TreeNode* root){
        if(!root)return;
        if(v.size()==level){
            v.push_back(root->val);
        }else{
            v[level]+=root->val;
        }
        
        dfs(v,level+1,root->left);
        dfs(v,level+1,root->right);

            
    }
    int maxLevelSum(TreeNode* root) {
        //bfs approach n,n
//         if(!root)return 0;
//         int maximal=0;
//         queue<TreeNode*>q;
//         q.push(root);
//         int count=0;
//         int maxsum=INT_MIN;
//         while(!q.empty()){
//             int n=q.size();
//             count++;
//             int sum=0;
//             for(int i=0;i<n;i++){
//                 TreeNode* temp=q.front();
//                 q.pop();
//                 sum+=temp->val;
//                 if(temp->left)q.push(temp->left);
//                 if(temp->right)q.push(temp->right);
//             }
//             if(sum>maxsum){
//                 maximal=count;
//                 maxsum=sum;
//             }
            
//         }
//         return maximal;
        
        
        //dfs approach n,h
        if(!root)return 0;
        vector<int>v;
        dfs(v,0,root);
        int x=*max_element(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==x)return i+1;
        }
        return 0;
    }
};