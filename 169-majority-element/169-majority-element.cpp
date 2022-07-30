class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        return nums[mid];
        
    }
};