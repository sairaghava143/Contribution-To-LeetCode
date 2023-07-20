class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flip1=(__builtin_popcount((a|b)^c));
        int flip2=(__builtin_popcount(a&b&((a|b)^c)));
                   return flip1+flip2;

    }
};