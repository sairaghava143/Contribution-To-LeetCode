class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currmin=nums[0];
        int currmax=nums[0];
        int ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            int currmax_prev=currmax;
            currmax=max({nums[i],currmax*nums[i],currmin*nums[i]});
            currmin=min({nums[i],currmax_prev*nums[i],currmin*nums[i]});
            ans=max(ans,currmax);

        }
        return ans;
    }
};