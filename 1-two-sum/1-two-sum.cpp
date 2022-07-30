class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // if(nums.size()==0)return nums;
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target && i<j){
        //             ans.push_back(i);
        //               ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;  -->time->(n^2) space->O(1)approach
        
        //optimized approach
        //map approach time->(n) space->O(n)
        
         // if(nums.size()==0)return nums;
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int element=target-nums[i];
             if(m.find(element)==m.end()){
                  m[nums[i]]=i;
             }else{
                ans.push_back(m[element]);
                ans.push_back(i);
            }
            
        } 
        return ans;
    }
};