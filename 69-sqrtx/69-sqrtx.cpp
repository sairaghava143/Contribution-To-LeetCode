class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        for(long long i=1;i<=x;i++){
            if(i*i<=x){
               ans=int(i); 
            }else{
                return ans;
            }
        }
        return ans;
        
    }
};