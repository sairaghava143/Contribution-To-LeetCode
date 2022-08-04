class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>>ans;
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//                 int left=i+1,right=n-1;
//             while(left<right){
//                  int sum=nums[i]+nums[left]+nums[right];
            
//             if(sum==0){
//                 ans.insert({nums[i],nums[left],nums[right]});
//                 left++;
//                 right--;
//             }else if(sum<0){
//                                 left++;

//             }else{
//                                 right--;

//             }
                
//             }
           
            
//         }
//         vector<vector<int>>v;
//    for(auto it:ans){
//        v.push_back(it);
//    }
        
//         return v;
//     }
        
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
                int left=i+1,right=n-1;
            while(left<right){
                 int sum=nums[i]+nums[left]+nums[right];
            
            if(sum==0){
                ans.push_back({nums[i],nums[left],nums[right]});
                while(left<right && nums[left]==nums[left+1])left++;
                while(left<right && nums[right]==nums[right-1])right--;
                left++;
                right--;
            }else if(sum<0){
                                left++;

            }else{
                                right--;

            }
                
            }
           
            
        }

        
        return ans;
    }
};