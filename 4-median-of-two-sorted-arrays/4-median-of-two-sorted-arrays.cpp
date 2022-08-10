class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        vector<int> v(m+n);
        int i=0,j=0,k=0;
        while(i< m && j< n){
            if(nums1[i]<=nums2[j]){
                v[k++]=nums1[i++];
            }else{
                v[k++]=nums2[j++];
            }
        }
        while(i<m){
            v[k++]=nums1[i++];
        }
        while(j<n){
            v[k++]=nums2[j++];
        }
        int size=v.size();
        if(size&1){
            return v[size/2];
        }
     
         double ans=0.0;
     ans=double(v[(1.0*size)/2.0])+double(v[((1.0*size)/2.0)-1.0]);
         return ans/2.0;
     
    }
};