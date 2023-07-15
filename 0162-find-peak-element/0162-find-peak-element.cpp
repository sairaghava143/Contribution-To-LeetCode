class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //brute force nlogn,n
        // vector<pair<int,int>>v;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     v.push_back({nums[i],i});
        // }
        // sort(v.begin(),v.end());
        // return v.back().second;
        
        //another approach
    if(nums.size()==1)return 0;
        for(int i=0;i<nums.size();i++){
            if(i==0 || i==nums.size()-1){
                if(i==0 && nums[i]>nums[i+1]){
                    return i;
                }
                if(i==nums.size()-1 && nums[i]>nums[i-1])return i;
            }else{
                if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                    return i;
                }
            }
        }
        return 0;
    }
};