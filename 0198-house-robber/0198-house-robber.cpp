class Solution {
public:
    //logic
    //maxmoney[i]=nums[i]+max(maxmoney(nums,i-1),maxmoney(nums,i-2));
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return max(maxmoney(nums,n-1,dp),maxmoney(nums,n-2,dp));
    }
    int maxmoney(vector<int>nums,int n,vector<int>&dp){
        if(n<0)return 0;
        if(n==0 || n==1)return nums[n];
        if(dp[n]!=-1)return dp[n];
        return dp[n]=nums[n]+max(maxmoney(nums,n-2,dp),maxmoney(nums,n-3,dp));
    }
};