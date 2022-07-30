class Solution {
public:
    int merge(vector<int>&nums,int start,int mid,int end){
        int j=mid,count=0;
        for(int i=start;i<mid;i++){
            while(j<=end && nums[i]>2LL * nums[j]){
                j++;
            }
            count+=(j-(mid));
        }
        vector<int>v;
        int left=start,right=mid;
        while(left<mid && right<=end){
            if(nums[left]<=nums[right]){
                v.push_back(nums[left++]);
            }else{
                v.push_back(nums[right++]);
            }
        }
        while(left<mid){
            v.push_back(nums[left++]);
        }
         while(right<=end){
            v.push_back(nums[right++]);
        }
        
        for(int i=start,k=0;i<=end;i++,k++){
            nums[i]=v[k];
        }
        return count;
    }
    int merge_sort(vector<int>&nums,int start,int end){
        int count=0;
        if(start<end){
            int mid=start+(end-start)/2;
            int left=merge_sort(nums,start,mid);
            int right=merge_sort(nums,mid+1,end);
            int mycount=merge(nums,start,mid+1,end);
            return left+right+mycount;
        }
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return merge_sort(nums,0,nums.size()-1);
    }
};