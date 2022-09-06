class Solution {
public:
    bool isPowerOfThree(int n) {
             // int x=pow(3,floor(log(INT_MAX)/log(3)));
       //  cout<<x;
        return n>0 && 1162261467%n==0;
    }
};