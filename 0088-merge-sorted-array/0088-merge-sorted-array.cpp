
class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Create a new vector to store the merged array
    vector<int> merged(m + n);

    // Initialize variables to keep track of the current index in each array
    int i = 0, j = 0, k = 0;

    // While both arrays have elements remaining
    while (i < m && j < n) {
        // Compare the elements at the current indices and add the smaller one to the merged array
        if (nums1[i] < nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    // Add any remaining elements from nums1 to the merged array
    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Add any remaining elements from nums2 to the merged array
    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    // Copy the merged array back into nums1
    nums1 = merged;
}

};