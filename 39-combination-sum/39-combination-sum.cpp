class Solution {
public:
    void helper(vector<vector<int>>&ans, int &target,vector<int>& candidates,vector<int>v,int &n,int index,int sum){
        if(index>=n){
            if(target==sum){
                
                            ans.push_back(v);

            }
            
            return;
        }

        if(sum+candidates[index]<=target ){
        
sum+=candidates[index];
        v.push_back(candidates[index]);
        helper(ans,target,candidates,v,n,index,sum);
sum-=candidates[index];

                   v.pop_back();


        }
             
                helper(ans,target,candidates,v,n,index+1,sum);

        

        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int index=0;
        int n=candidates.size();
        int sum=0;
        helper(ans,target,candidates,v,n,index,sum);
        return ans;
    }
};