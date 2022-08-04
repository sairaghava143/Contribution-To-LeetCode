class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
                int left=i+1,right=n-1;
            while(left<right){
                 int sum=nums[i]+nums[left]+nums[right];
            
            if(sum==0){
                ans.insert({nums[i],nums[left],nums[right]});
                left++;
                right--;
            }else if(sum<0){
                                left++;

            }else{
                                right--;

            }
                
            }
           
            
        }
        vector<vector<int>>v;
   for(auto it:ans){
       v.push_back(it);
   }
        
        return v;
    }
};