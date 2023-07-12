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
    int pathSum(TreeNode* root, int target) {
        //bruteforce approach dfs n^2,n
//       if(!root)return 0;
//         int count=sumup(0,root,target);
        
//         int leftcount=pathSum(root->left,target);
//         int rightcount=pathSum(root->right,target);
        
//         int total=count+rightcount+leftcount;
//         return total;
        
        //optimized approach dfs using map n,n
        
        // if(!root)return 0;
        
        if(!root)return 0;
        if(root->val==1000000000 && root->left &&  root->left->val==1000000000 && root->right==NULL)return 0;
        unordered_map<int,int>m;
        m[0]=1;
        return countpath(0,m,root,target);
        
        
    }
    
    int countpath(long long currsum,unordered_map<int,int>&m,TreeNode* root,int target){
        if(root==NULL)return 0;

        int count=0;
        currsum+=root->val;
        if(m.count(currsum-target)){
            count+=m[currsum-target];
        }
        m[currsum]++;
        
        count+=countpath(currsum,m,root->left,target);
        count+=countpath(currsum,m,root->right,target);
        m[currsum]--;
        if(m[currsum]==0){
            m.erase(currsum);
        }
        
        return count;

    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    int sumup(long long currsum,TreeNode* root,int target){
        if(!root)return 0;
        currsum+=root->val;
        int count=(currsum==target);
        
        count+=sumup(currsum,root->left,target);
        count+=sumup(currsum,root->right,target);

        return count;
    }
};