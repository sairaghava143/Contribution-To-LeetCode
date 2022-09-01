class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&v,int &n,int index,vector<int>&nums,vector<int>temp){
        if(v.size()>=n){
            ans.push_back(v);
            return;
        }
        
        for(int i=index;i<n;i++){
            if(!temp[i]){
                temp[i]=1;
                v.push_back(nums[i]);
                            solve(ans,v,n,index,nums,temp);
  temp[i]=0;
                v.pop_back();
            }
       
                      


        }
  
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        
        int n=nums.size();
        vector<int>temp(n,0);
        int index=0;
        solve(ans,v,n,index,nums,temp);
        return ans;
    }
};