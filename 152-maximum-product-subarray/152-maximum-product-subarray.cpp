class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currmax=nums[0];
        int currmin=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            int curr_prev=currmax;
            currmax=max({nums[i],currmax*nums[i],currmin*nums[i]});
            currmin=min({nums[i],curr_prev*nums[i],currmin*nums[i]});
            res=max(currmax,res);
        }
return res;
    }
};