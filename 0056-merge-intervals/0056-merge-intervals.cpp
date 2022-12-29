class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //  vector<vector<int>> res;
        // sort(intervals.begin(), intervals.end());
        // for (int i = 0; i < intervals.size(); i++) {
        //     if (res.empty() || intervals[i][0] > res.back()[1]) {
        //         res.push_back(intervals[i]);
        //     } else {
        //         res.back()[1] = max(res.back()[1], intervals[i][1]);
        //     }
        // }
        // return res;
        sort(intervals.begin(),intervals.end());
        
        int n=intervals.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            if(v.empty()||intervals[i][0]>v.back()[1]){
                v.push_back(intervals[i]);
            }else{
                v.back()[1]=max(intervals[i][1],v.back()[1]);
            }
        }
        return v;
    }
};