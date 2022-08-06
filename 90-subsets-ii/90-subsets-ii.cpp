class Solution {
public:
    void subset(vector<vector<int>> &ans,vector<int>temp,int index,vector<int>nums){
        ans.push_back(temp);
        for(int i=index;i<nums.size();i++){
            if(i!=index && nums[i]==nums[i-1])continue;
            temp.push_back(nums[i]);
            subset(ans,temp,i+1,nums);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        subset(ans,temp,0,nums);
        return ans;
        
    }
};