class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // binary search
        // time: O(nlogn), space: O(1)
        int left = 1, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = 0;
            for (int num : nums) {
                if (num <= mid) ++count;
            }
            if (count > mid) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};
