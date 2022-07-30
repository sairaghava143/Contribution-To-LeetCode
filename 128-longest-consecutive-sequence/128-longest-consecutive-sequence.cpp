class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         if(nums.empty())return 0;
//         set<int>s;
//         for(auto i:nums){
//             s.insert(i);
//         }
        
//         nums.clear();
//         for(auto i:s){
//             nums.push_back(i);
//         }
//         int count=1;
//         int ans=1;

//         for(int i=1;i<nums.size();i++){
//             // if(nums[i]==nums[i-1])continue;
//             if(nums[i]==nums[i-1]+1){
//                 ++count;
               
//             }else{
//                 count=1;
//             }
//              ans=max(ans,count);
            
//         }
//         return ans;
        
        
        ////brute force approach
//         int count=1;
//         int ans=1;
//  sort(nums.begin(),nums.end());
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1])continue;
//            else if(nums[i]==nums[i-1]+1){
//                 ++count;
               
//             }else{
//                 count=1;
//             }
//              ans=max(ans,count);
            
//         }
//         return ans;
        
        
        
        //optimal approach
        unordered_set<int>s;
        int n=nums.size();
        if(n<0)return 0;
        for(auto i:nums){
            s.insert(i);
        }
        int longestStreak=0;
        for(int i=0;i<n;i++){
            if(!s.count(nums[i]-1)){
                int currentNum=nums[i];
                int currentStreak=1;
                while(s.count(currentNum+1)){
                    currentNum++;
                    currentStreak++;
                }

                    longestStreak=max(longestStreak,currentStreak);
            }
        }
        
        
        
        
        
        return longestStreak;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};