class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
//bruteforce
        
//     int maxlen=0,len=0;
//         for(int i=0;i<nums.size();i++){
//             int zeroes=0;
//             for(int j=i;j<nums.size();j++){
//                 if(nums[j]==0){
//                     zeroes++;
//                 }
//                 if(zeroes>k){
//                     break;
//                 }
//                 len=j-i+1;
//                 maxlen=max(len,maxlen);
                
//             }
//         }
//         return maxlen;
        
        
        //sliding window approach
        
//         int maxlen=0,len=0;
//         int zeroes=0;
//         int j=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 zeroes++;
//             }
            
//             if(zeroes>k){
//                 if(nums[j]==0)zeroes--;
//                 j++;
//             }
//             len=i-j+1;
//             maxlen=max(len,maxlen);
//         }
//         return maxlen;
        
        //practice
        
        int n=nums.size();
        int maxlen=0,len=0;
        int zeroes=0,j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zeroes++;
            }
            if(zeroes>k){
             if(nums[j]==0)zeroes--;
                j++;
            }
            len=i-j+1;
            maxlen=max(len,maxlen);
        }
        
        return maxlen;
    }
};