class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
//         multiset<int>s;
//         for(auto i:nums){
//             s.insert(i);
//         }
//         
//         nums.clear();
//         for(auto i:s){
//             nums.push_back(i);
//         }
        int count=1;
        int ans=1;
 sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
           else if(nums[i]==nums[i-1]+1){
                ++count;
               
            }else{
                count=1;
            }
             ans=max(ans,count);
            
        }
        return ans;
    }
};