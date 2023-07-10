class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxlen=0,len=0,j=0,ones=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ones++;
            }
            if(ones>1){
                 if(nums[j]==0){
                ones--;
            }
                j++;
            }
           
            len=i-j;
            maxlen=max(len,maxlen);
            
        }
        return maxlen;
    }
};