class Solution {
public:
    void subset(vector<vector<int>>&ans,vector<int>temp,int index,vector<int>candidates,int target){
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        
        if(candidates[index]<=target){
            temp.push_back(candidates[index]);
            subset(ans,temp,index,candidates,target-candidates[index]);
            temp.pop_back();
        }
            subset(ans,temp,index+1,candidates,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        subset(ans,temp,0,candidates,target);
        return ans;
    }
};