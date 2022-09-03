class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32>x(n);
        return x.count();
    }
};