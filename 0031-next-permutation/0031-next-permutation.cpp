class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<=1)return;
        int i=nums.size()-2;
        while(i>=0 && nums[i]>=nums[i+1])i--;
        int j=nums.size()-1;
        if(i>=0){
            while(j>=0 && nums[j]<=nums[i])j--;
            swap(nums[i],nums[j]);
        }
        std::next_permutation(nums.begin()+i+1,nums.end());
    }
};
