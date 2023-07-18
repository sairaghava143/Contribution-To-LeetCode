class Solution {
public:
    int tribonacci(int n) {
        //normal approach
        // if(n<2)return n;
        // int a=0,b=1,c=1,d=0;
        // while(n>2){
        //     d=a+b+c;
        //     a=b,b=c,c=d;
        //     n--;
        // }
        // return c;
        
        //dp approach
        
        int dp[3]={0,1,1};
        for(int i=3;i<=n;i++){
            dp[i%3]=dp[0]+dp[1]+dp[2];
        }
        return dp[n%3];
        
    }
};