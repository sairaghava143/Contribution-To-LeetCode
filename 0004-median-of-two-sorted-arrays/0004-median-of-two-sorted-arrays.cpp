class Solution {
public:
  

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }
    
    int x = nums1.size();
    int y = nums2.size();
    int start = 0;
    int end = x;
    
    while (start <= end) {
        int partitionX = (start + end) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;
        
        int maxOfLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minOfRightX = (partitionX == x) ? INT_MAX : nums1[partitionX];
        
        int maxOfLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minOfRightY = (partitionY == y) ? INT_MAX : nums2[partitionY];
        
        if (maxOfLeftX <= minOfRightY && maxOfLeftY <= minOfRightX) {
            if ((x + y) % 2 == 0) {
                return (max(maxOfLeftX, maxOfLeftY) + min(minOfRightX, minOfRightY)) / 2.0;
            } else {
                return max(maxOfLeftX, maxOfLeftY);
            }
        } else if (maxOfLeftX > minOfRightY) {
            end = partitionX - 1;
        } else {
            start = partitionX + 1;
        }
    }
    
    throw invalid_argument("Input arrays are not sorted");
}

};