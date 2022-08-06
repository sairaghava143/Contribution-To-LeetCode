class Solution {
public:
    void subset(vector<vector<int>>&ans,vector<int>temp,int index,int target,vector<int> arr){
        if(index==arr.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(arr[index]<=target){
            temp.push_back(arr[index]);
            subset(ans,temp,index,target-arr[index],arr);
            temp.pop_back();
        }
        subset(ans,temp,index+1,target,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        subset(ans,temp,0,target,candidates);
        return ans;
    }
};