class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        unordered_map<int,int>m1,m2;
        
        for(auto it:nums1)m1[it]++;
                for(auto it:nums2)m2[it]++;
        for(int i=0;i<nums1.size();i++){
            if(m2.count(nums1[i])==false){
                ans[0].push_back(nums1[i]);
                m2[nums1[i]]++;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(m1.count(nums2[i])==false){
                ans[1].push_back(nums2[i]);
                m1[nums2[i]]++;
            }
        }
        return ans;

    }
};