class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&v,int &n,int index,vector<int>&nums){
        if(index>=n){
            ans.push_back(nums);
            return;
        }
        
        for(int i=index;i<n;i++){
            swap(nums[index],nums[i]);
            solve(ans,v,n,index+1,nums);
        swap(nums[index],nums[i]);
                      


        }
  
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int n=nums.size();
        int index=0;
        solve(ans,v,n,index,nums);
        return ans;
    }
};