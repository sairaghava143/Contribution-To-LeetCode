class Solution {
public:
    void helper(vector<vector<int>>&ans, int target,vector<int>& candidates,vector<int>v,int &n,int index){
        if(index>=n){
            if(target==0){
                
                            ans.push_back(v);

            }
            
            return;
        }

        if(candidates[index]<=target){
        

        v.push_back(candidates[index]);
        helper(ans,target-candidates[index],candidates,v,n,index);

                   v.pop_back();


        }
             
                helper(ans,target,candidates,v,n,index+1);

        

        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int index=0;
        int n=candidates.size();
        int sum=0;
        helper(ans,target,candidates,v,n,index);
        return ans;
    }
};