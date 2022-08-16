class Solution {
public:
    int myAtoi(string s) {
    int x=0;
        stringstream ss(s);
        ss>>x;
        return x;
    }
};