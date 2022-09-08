class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>q;
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(auto &it:s){
            q.push(it);
        }
        if(q.size()<3)return *max_element(nums.begin(),nums.end());
        while(q.size()>3){
            q.pop();
        }
        return q.top();
    }
};