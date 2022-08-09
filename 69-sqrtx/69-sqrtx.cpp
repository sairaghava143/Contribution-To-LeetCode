class Solution {
public:
    int mySqrt(int x) {
        int s=0,e=x,ans=-1;
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(mid*mid<=x){
                ans=int(mid);
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
};