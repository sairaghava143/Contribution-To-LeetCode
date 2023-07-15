class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={nums2[i],nums1[i]};
        }
        sort(v.rbegin(),v.rend());
        long long sumS=0;
        long long maxscore=0;
        priority_queue<int,vector<int>,greater<int>>pq;
       for(auto [e,s]: v){
           pq.push(s);
           sumS+=s;
           if(pq.size()>k){
               sumS-=pq.top();
                              pq.pop();
           }
           if(pq.size()==k){
               maxscore=max(maxscore,sumS*e);
           }
       }
        return maxscore;
    }
};