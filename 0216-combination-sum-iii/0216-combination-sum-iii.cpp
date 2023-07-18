class Solution {
public:
    //9^k ,k
//     void combination(vector<vector<int>> &ans,vector<int>&sum ,int k,int n){
//         if(sum.size()==k && n==0){
//             ans.push_back(sum);
//             return;
//         }
//         //pick and not pick
        
//         for(int i=sum.empty()?1:sum.back()+1;i<=9;i++){
//             if(n-i<0)break;
//             sum.push_back(i);
//             combination(ans,sum,k,n-i);
//             sum.pop_back();
//         }
            
//     }
//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<vector<int>>ans;
//         vector<int>sum;
//         combination(ans,sum,k,n);
//         return ans;
//     }
    
    //2^9,k
    void combination(vector<vector<int>> &ans,vector<int>&sum ,int k,int n,int start){
        if(sum.size()==k && n==0){
            ans.push_back(sum);
            return;
        }
        //pick and not pick
        
        for(int i=start;i<=9;i++){
            if(n-i<0)break;
            sum.push_back(i);
            combination(ans,sum,k,n-i,i+1);
            sum.pop_back();
        }
            
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>sum;
        combination(ans,sum,k,n,1);
        return ans;
    }
};