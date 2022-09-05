class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int count=0;
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
          if(nums[i]==0){
              j=i;
              while(j<n && nums[j]==0){
                  j++;
              }
              if(j>=n)break;
              nums[i]=nums[j];
              nums[j]=0;
              j=0;
              
          }
           }
        
        
    }
};