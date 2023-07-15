class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<pair<int,int>>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        return v.back().second;
    }
};