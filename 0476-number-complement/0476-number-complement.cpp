class Solution {
public:
   int findComplement(int num) {
    unsigned mask = ~0; // create a mask with all 1 bits
    while (num & mask) mask <<= 1; // shift the mask to the right until it covers all the leading 1 bits of num
    return ~num & ~mask; // use the bitwise NOT operator to flip all the bits of num and the mask, and return the result
}

};