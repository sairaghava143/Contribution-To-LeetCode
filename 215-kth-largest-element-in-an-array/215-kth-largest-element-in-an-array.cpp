class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            int x=q.top();
            if(nums[i]>x){
                q.pop();
                q.push(nums[i]);
            }
        }
        // cout<<q.top();
        // int y;
        // while(!q.empty()){
        //     y=q.top();
        //     q.pop();
        // }
        return q.top();
    }
};