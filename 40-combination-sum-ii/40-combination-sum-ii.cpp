class Solution {
public:
    void solve(int index,int &n,vector<int>v,vector<int>&c,int target,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(v);
        }
        
        for(int i=index;i<n;i++){
            if(i!=index && c[i]==c[i-1])continue;
            if(c[i]>target)break;
            v.push_back(c[i]);
            solve(i+1,n,v,c,target-c[i],ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<vector<int>>ans;
        vector<int>v;
        int n=c.size();
        int index=0;
        sort(c.begin(),c.end());
        solve(index,n,v,c,t,ans);
        return ans;
    }
};