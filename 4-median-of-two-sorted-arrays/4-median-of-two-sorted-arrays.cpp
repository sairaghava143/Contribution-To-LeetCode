class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size())return findMedianSortedArrays(nums2,nums1);
        int n1=nums1.size();
        int n2=nums2.size();
        
        int s=0,e=n1;
        while(s<=e){
            int cut1=(s+e)>>1;
            int cut2=(n1+n2+1)/2-cut1;
            int l1,l2,r1,r2;
            if(cut1==0){
                l1=INT_MIN;
            }else{
                l1=nums1[cut1-1];
            }
             if(cut2==0){
                l2=INT_MIN;
            }else{
                l2=nums2[cut2-1];
            }
             if(cut1==n1){
                r1=INT_MAX;
            }else{
                r1=nums1[cut1];
            }
             if(cut2==n2){
                r2=INT_MAX;
            }else{
                r2=nums2[cut2];
            }
            
        // int l1=cut1==0?INT_MIN:nums1[cut1-1];
        //     int l2=cut2==0?INT_MIN:nums2[cut2-1];
        //     int r1=cut1==n1?INT_MAX:nums1[cut1];
        //     int r2=cut2==n2?INT_MAX:nums2[cut2];
            if(l1<=r2 && l2<=r1){
                if((n1+n2)&1){
                    return max(l1,l2);
                }else{
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
            }else if(l1>r2){
                e=cut1-1;
            }else{
                s=cut1+1;
            }
        }
            return -1;
    }
};