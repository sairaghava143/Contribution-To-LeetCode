class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //bruteforce 
        // int count=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for (int j=0;j<n;j++){
        //         if(nums[i]+nums[j]==k && i!=j && nums[i]<k && nums[j]<k){
        //             nums[i]=0,nums[j]=0;
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        //sort and two pointers approach t= nlogn s=1
        
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,count=0;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==k){
                count++;
                i++,j--;
                
            }else if(sum>k){
                j--;
            }else{
                i++;
            }
        }
        return count;
        

    }
};