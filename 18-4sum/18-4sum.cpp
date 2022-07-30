class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector< vector<int>>ans;
        if(nums.empty()){
            return ans;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int left=j+1,right=n-1;
                long long int sum=1ll*target-1ll*nums[i]-1ll*nums[j];
                while(left<right){
                    long long int two_sum=1ll*nums[left]+1ll*nums[right];
                    if(two_sum<sum){
                        left++;
                    }else if(two_sum>sum){
                        right--;
                    }else{
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        int x=nums[left],y=nums[right];
                    
                        while(left<right && nums[left]==x)left++;
                         while(left<right && nums[right]==y)right--;
                        
                    }
                  
                    
                }
                  while(j<n-1 && nums[j]==nums[j+1])j++;
            }
              while(i<n-1 && nums[i]==nums[i+1])i++;
        }
 
        return ans;
        
    }
};