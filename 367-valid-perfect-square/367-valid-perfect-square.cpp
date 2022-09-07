class Solution {
public:
    bool isPerfectSquare(int num) {
     for(long long i=1;i<=num;i++){
         if(i*i==num)return true;
     }
        return false;
    }
};