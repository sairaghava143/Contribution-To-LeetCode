class Solution {
public:
    void solve(int index,int &n,vector<int>v,vector<vector<int>>&ans,vector<int>&nums){
        // if(index>=n){
        //     return;
        // }
                    ans.push_back(v);

        
        for(int i=index;i<n;i++){
            if(i!=index&& nums[i]==nums[i-1])continue;
              v.push_back(nums[i]);
              solve(i+1,n,v,ans,nums);
              v.pop_back();
        }
     // solve(index+1,n,v,ans,nums);

        
      
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int index=0;
   
        int n=nums.size();
        sort(nums.begin(),nums.end());
        solve(index,n,v,ans,nums);
        return ans;
    }
};