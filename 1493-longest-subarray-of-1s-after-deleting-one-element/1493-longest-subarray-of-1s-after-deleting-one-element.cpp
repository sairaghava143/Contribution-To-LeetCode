class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //bruteforce
        // int maxlen=0,len=0;
        // for(int i=0;i<nums.size();i++){
        //     int zeores=0;
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[j]==0){
        //             zeores++;
        //         }
        //         if(zeores>1){
        //             break;
        //         }
        //         len=j-i;
        //         maxlen=max(len,maxlen);
        //     }
        // }
        // return maxlen;
        
        //practice
        
        int maxlen=0,len=0,zeores=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            {
                zeores++;
            }
            if(zeores>1){
                if(nums[j]==0)zeores--;
                j++;
            }
            len=i-j;
            maxlen=max(len,maxlen);
        }
        return maxlen;
        
//         int maxlen=0,len=0,j=0,ones=0;
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 ones++;
//             }
//             if(ones>1){
//                  if(nums[j]==0){
//                 ones--;
//             }
//                 j++;
//             }
           
//             len=i-j;
//             maxlen=max(len,maxlen);
            
//         }
//         return maxlen;
    }
};