class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(m.count(nums[i]))return true;
        m[nums[i]]++;
        }
        return false;;
    }
};