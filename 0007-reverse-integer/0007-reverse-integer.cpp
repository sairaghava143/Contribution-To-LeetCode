class Solution {
public:
    int reverse(int x) {
        long long y=0;
        bool flag=false;
        if(x<0){
            x=abs(x);
            flag=true;
        }
        while(x>0){
            y=y*10+(x%10);
            x/=10;
        }
        if(y>=INT_MAX|| y<=INT_MIN)return 0;
        if(flag)return int(-y);
        return int(y);
    }
};