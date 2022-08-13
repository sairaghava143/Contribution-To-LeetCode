class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
//         stack<int>s;
//         unordered_map<int,int>m;
//         for(int it:nums2){
//             if(s.size() && s.top()<it){
//                 m[s.top()]=it;
//                 s.pop();
//             }
// s.push(it);

            
//         }
//         vector<int>ans;
//         for(auto it:nums1){
//             ans.push_back(m.count(it)?m[it]:-1);
//         }
//         return ans;
    stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};