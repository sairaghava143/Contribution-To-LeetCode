class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss<<hex<<num;
        cout<<hex<<num;
        string word;
        ss>>word;
        return word;
    }
};