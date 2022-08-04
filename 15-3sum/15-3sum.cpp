class Solution {
public:

      
        
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int left=i+1;int right=nums.size()-1;
            int targetsum=nums[i];
           while(left<right){
              int sum=targetsum+nums[left]+nums[right];
            if(sum>0){
                right--;
            }else if(sum<0){
                left++;
            }else{
                 v.push_back({targetsum,nums[left],nums[right]});
                while(left<right && nums[left]==nums[left+1])left++;
                while(left<right && nums[right]==nums[right-1])right--;
                left++;
                right--;
            }
           
        }
        }
        return v;
    }
};