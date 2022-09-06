class Solution {
public:
    bool isPowerOfTwo(int n) {

       // int x=pow(2,floor(log(INT_MAX)/log(2)));
       //  cout<<x;
        return n>0 && 1073741824%n==0;
    }
};