class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>l;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(l.size() && l.front()==i-k)l.pop_front();
            while(l.size() && nums[l.back()]<=nums[i])l.pop_back();
            l.push_back(i);
                    if(i>=k-1){
                ans.push_back(nums[l.front()]);
            }
        }
        return ans;
        
    }
};