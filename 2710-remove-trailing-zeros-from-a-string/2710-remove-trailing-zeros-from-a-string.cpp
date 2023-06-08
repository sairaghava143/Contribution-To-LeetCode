class Solution {
public:
    string removeTrailingZeros(string str) {
        size_t lastNonZero = str.find_last_not_of('0');
    return str.substr(0, lastNonZero + 1);
    }
};