class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-2;   //here e=nums.size()-2 is must
        while(s<=e){
            int mid=s+((e-s)>>1);
            if(mid&1){
                if(nums[mid]==nums[mid-1]){
                s=mid+1;
            }else{
                e=mid-1;
            }
            }else{
                if(nums[mid]==nums[mid+1]){
                s=mid+1;
            }else{
                e=mid-1;
            }
            }
            // if(nums[mid]==nums[mid^1]){
            //     s=mid+1;
            // }else{
            //     e=mid-1;
            // }
        }
        return nums[s];
    }
};