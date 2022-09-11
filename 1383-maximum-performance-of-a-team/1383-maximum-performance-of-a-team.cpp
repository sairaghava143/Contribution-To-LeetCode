class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        int mod=1e9+7;
        long long ans=INT_MIN,sum=0;
        priority_queue<int,vector<int>,greater<int>>q;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({efficiency[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++){
            int sp=v[i].second,eff=v[i].first;
            
            sum+=sp;
            q.push(sp);
            if(q.size()>k){
                sum-=q.top();
                q.pop();
            }
            ans=max(ans,sum*eff);
        }
        return ans%mod;
            
    }
};