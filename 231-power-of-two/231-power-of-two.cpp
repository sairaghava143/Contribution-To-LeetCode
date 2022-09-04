class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x=INT_MAX;
    for(int i=0;i<x;i++){
        long long s=pow(2,i);
        if(s>n)return false;
        if(s==n)return true;
    
    }
        return false;
   
    }
};