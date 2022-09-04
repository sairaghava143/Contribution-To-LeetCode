class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        bitset<32>s(n);
        
        return s.count()==1;
    }
};