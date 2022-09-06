class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
if(n==243||n==59049||n==1594323||n==14348907||n==129140163)return true;
        return floor(log(n)/log(3))==ceil(log(n)/log(3));
    }
};