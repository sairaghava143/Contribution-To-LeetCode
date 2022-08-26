class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(q.top()<nums[i]){
                q.pop();
                q.push(nums[i]);
            }
        }
        return q.top();
    }
};