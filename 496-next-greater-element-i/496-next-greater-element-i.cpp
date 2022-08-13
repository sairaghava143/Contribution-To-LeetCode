class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>m;
        for(int it:nums2){
            while(s.size() && s.top()<it){
                m[s.top()]=it;
                s.pop();
            }
s.push(it);

            
        }
        vector<int>ans;
        for(auto it:nums1){
            ans.push_back(m.count(it)?m[it]:-1);
        }
        return ans;
    }
};