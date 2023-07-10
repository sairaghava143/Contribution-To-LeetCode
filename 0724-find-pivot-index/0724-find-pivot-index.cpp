class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //brute force
        int n=nums.size();
        for(int i=0;i<n;i++){
            int s1=0,s2=0;
            for(int j=i-1;j>=0;j--){
                s1+=nums[j];
            }
            for(int j=i+1;j<n;j++){
                s2+=nums[j];
            }
            if(s1==s2)return i;
        }
        return -1;
    }
};