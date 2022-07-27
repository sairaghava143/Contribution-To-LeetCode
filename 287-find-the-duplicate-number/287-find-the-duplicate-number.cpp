class Solution
{
    public:
        int findDuplicate(vector<int> &nums)
        {
           	//linked list cycle algoritm time: O(n)  ,space O(1)
            int slow = nums[0], fast = nums[0];
            do {
                slow = nums[slow];
                fast = nums[nums[fast]];
            } while (slow != fast);
            slow = nums[0];
            while (slow != fast)
            {
                slow = nums[slow];
                fast = nums[fast];
            }
            
            return slow;
        }
};