class Solution {
public:
    double myPow(double x, int n) {
        // return pow(x,n);
    double ans=1.0;
        long long nn=n;
        if(nn<0){
            nn=-1.0*n;
        }
        while(nn){
            if(nn % 2){
                ans*=x;
                    nn-=1;
            }else{
                x*=x;
                nn/=2;
            }
        }
        if(n<0){
            return 1.0/double(ans);
        }
        return ans;
    }
};