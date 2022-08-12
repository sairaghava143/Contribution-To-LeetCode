class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // priority_queue<int,vector<int>,greater<int>>q;
        // for(int i=0;i<k;i++){
        //     q.push(nums[i]);
        // }
        // for(int i=k;i<nums.size();i++){
        //     int x=q.top();
        //     if(nums[i]>x){
        //         q.pop();
        //         q.push(nums[i]);
        //     }
        // }
        // return q.top();
    //     priority_queue<int>q;
    //     for(int i=0;i<nums.size();i++){
    //         q.push(nums[i]);
    //     }
    // for(int i=0;i<k-1;i++){
    //     q.pop();
    // }
    //     return q.top();
//          priority_queue<int,vector<int>,greater<int>>q;
//         for(int i=0;i<nums.size();i++){
//             q.push(nums[i]);
//         }
//     for(int i=0;i<nums.size()-k;i++){
//         q.pop();
//     }
//         return q.top();
       ///nth element stl
        nth_element(nums.begin(),nums.begin()+k-1,nums.end(),greater<int>());
        return nums[k-1];

    }
};