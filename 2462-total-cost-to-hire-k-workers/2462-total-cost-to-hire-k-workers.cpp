class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int c) {
        int i=0,j=costs.size()-1;
        priority_queue<int,vector<int>,greater<int>>pq1;
        priority_queue<int,vector<int>,greater<int>>pq2;
long long ans=0;
        while(k--){
            while(pq1.size()<c && i<=j){
                pq1.push(costs[i++]);
                
            }
             while(pq2.size()<c && i<=j){
                pq2.push(costs[j--]);
                
            }
            int c1=pq1.size()>0?pq1.top():INT_MAX;
            int c2=pq2.size()>0?pq2.top():INT_MAX;
            if(c1<=c2){
                ans+=c1;
                pq1.pop();
            }else{
                ans+=c2;
                pq2.pop();
            }

        }
        return ans;
    }
};