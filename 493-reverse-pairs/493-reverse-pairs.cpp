class Solution {
public:
    int merge(vector<int> &nums,int start,int mid,int end){
        int j=mid+1;
        int count=0;
        for(int i=start;i<=mid;i++){
            while(j<=end && nums[i]>2LL*nums[j]){
                j++;
            }
            count+=(j-(mid+1));
        }
        vector<int>v;
        int left=start,right=mid+1;
        while(left<=mid && right<=end){
            if(nums[left]<=nums[right]){
                v.push_back(nums[left]);
                left++;
            }else{
                v.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            v.push_back(nums[left]);
            left++;
        }
        while(right<=end){
            v.push_back(nums[right]);
            right++;
            
        }
        for(int i= start;i<=end;i++){
            nums[i]=v[i-start];
        }
        return count;
    }
    int merge_sort(vector<int> &nums,int start,int end){
        if(start>=end)return 0;
        int mid=start+(end-start)/2;
        int left=merge_sort(nums,start,mid);
        int right=merge_sort(nums,mid+1,end);
        int count=merge(nums,start,mid,end);
        return count+left+right;
    }
    int reversePairs(vector<int>& nums) {
        //time : O(N^2)
        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         long long x=nums[i],y=nums[j];
        //         if(x>2*y){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        //time : O(nlogn)
        return merge_sort(nums,0,nums.size()-1);
    }
};