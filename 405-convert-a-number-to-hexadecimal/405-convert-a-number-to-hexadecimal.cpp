class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss<<hex<<num;
        string word;
        ss>>word;
        return word;
    }
};