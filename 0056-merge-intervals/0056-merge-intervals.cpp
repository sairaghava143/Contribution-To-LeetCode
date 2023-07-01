class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 0)
            return intervals;
        
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        vector<int> temp = intervals[0];
        
        for (auto it : intervals) {
            if (it[0] <= temp[1]) {
                temp[1] = max(temp[1], it[1]);
            } else {
                v.push_back(temp);
                temp = it;
            }
        }
        
        v.push_back(temp);
        return v;
    }
};
