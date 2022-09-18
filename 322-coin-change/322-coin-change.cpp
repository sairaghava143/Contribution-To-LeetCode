class Solution {
public:
    vector<vector<int>>dp;
    int coin(vector<int>& coins, int amount,int i,int &n){
        if(i>=n || amount<=0){
            return (amount==0)?0:INT_MAX-1;
        }
        if(dp[i][amount]!=-1)return dp[i][amount];
        int ans=-1;
                    int nottake=0+coin(coins,amount,i+1,n);
            int take=INT_MAX;

        if(coins[i]<=amount){

             take=1+coin(coins,amount-coins[i],i,n);

        }
                    ans=min(take,nottake);

        return dp[i][amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        dp.resize(n+1,vector<int>(amount+1,-1));
        int res=coin(coins,amount,0,n);
        return (res==INT_MAX-1)?-1:res;
    }
};