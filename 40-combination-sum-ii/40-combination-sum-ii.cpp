class Solution {
public:
    void subset(vector<vector<int>>&ans,vector<int>temp,int index,vector<int> arr, int target){
        if(target==0){
            ans.push_back(temp);
        }
        
        for(int i=index;i<arr.size();i++){
            if(i!=index && arr[i]==arr[i-1])continue;
            if(arr[i]>target)continue;
            temp.push_back(arr[i]);
            subset(ans,temp,i+1,arr,target-arr[i]);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        subset(ans,temp,0,candidates,target);
        return ans;
    }
};