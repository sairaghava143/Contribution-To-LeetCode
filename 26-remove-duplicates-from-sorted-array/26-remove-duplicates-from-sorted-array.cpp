class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute force approach
//         int n=nums.size();
        
//      auto it=std::unique(nums.begin(),nums.end());
        
// nums.resize(std::distance(nums.begin(),it));
//     return nums.size();
        
        //optimized approach sliding pattern
        if(nums.empty())return 0;
        
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
    return i+1;
    }
};