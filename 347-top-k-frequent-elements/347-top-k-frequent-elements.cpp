class Solution {
public:
    struct cmp{
      bool operator()(pair<int,int>&a,pair<int,int>&b){
          return a.second>b.second;
      }  
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>q;
        for(auto it: m){
            q.push(it);
        }
                vector<int>ans;

        while( !q.empty()){
            if(q.size()<=k){
                ans.push_back(q.top().first);
            }
            q.pop();
        }
       
        return ans;
        
    }
};