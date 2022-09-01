class Solution {
public:
    void solve(int index,vector<vector<int>>&ans,vector<int>v,int n,vector<int>&c,int t){
      
            if(t==0){
                ans.push_back(v);

            }
        
        for(int i=index;i<n;i++){
            if(i!=index && c[i]==c[i-1])continue;
            if(c[i]>t)continue;
    
            v.push_back(c[i]);
            solve(i+1,ans,v,n,c,t-c[i]);
            v.pop_back();

        }
        

    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<vector<int>>ans;
        vector<int>v;
        int index=0;
        int n=c.size();
        sort(c.begin(),c.end());
        solve(index,ans,v,n,c,t);
        return ans;
    }
};