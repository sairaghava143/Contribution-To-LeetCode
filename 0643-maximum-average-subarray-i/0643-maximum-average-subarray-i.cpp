class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
//         int j=0;
//         double maxsum=INT_MIN,sum=0;
//         for(int i=0;i<nums.size();i++){
//               sum+=nums[i];
//             if(i>=k){
//                 sum-=nums[j];
//                 j++;
                
//             }
//             if(i>=k-1){
//                                       maxsum=max(sum/double(k),maxsum);

//             }

//         }
//         return maxsum;
        
        //another
        
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
                double maxsum=sum/double(k);

        for(int i=k;i<nums.size();i++){
                        sum+=nums[i];
            sum-=nums[i-k];
            maxsum=max((double(sum)/double(k)),maxsum);
            
        }
        return maxsum;
    }
};