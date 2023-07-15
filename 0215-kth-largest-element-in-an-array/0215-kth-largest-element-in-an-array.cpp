class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //HEAP APPROACH
        // priority_queue<int>pq;
        // for(auto it:nums){
        //     pq.push(it);
        // }
        // k--;
        // while(k--){
        //     pq.pop();
        // }
        // return pq.top();
        
        //PARTIAL SORTING
        
        nth_element(nums.begin(),nums.begin()+k-1,nums.end(),greater<int>());
        return nums[k-1];
        
    }
};