class Solution {
public:
    bool isPerfectSquare(int num) {
   int s=0,e=num;
        long long mid=0,y=0;
        while(s<=e){
            mid=(s+e)/2;
            y=mid*mid;
            
            if(y==num){
                return true;
            }else if(y>num){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return false;
    }
};