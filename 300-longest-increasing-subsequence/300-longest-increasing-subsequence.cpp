class Solution {
public:
    int binSearch(vector<int>&lis,int &target){
        int s=0,e=lis.size()-1,ans=INT_MAX;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(lis[mid]>=target){
                ans=min(ans,mid);
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        if(ans!=INT_MAX)return ans;
        return -1;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>lis;
        lis.push_back(nums[0]);
        for(int i=1;i<n;i++){
            int a1=binSearch(lis,nums[i]);
            if(a1==-1){
                lis.push_back(nums[i]);
            }else{
                lis[a1]=nums[i];
            }
        }
        return lis.size();
    }
};