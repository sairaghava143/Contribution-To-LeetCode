class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss<<std::hex<<num;
        cout<<std::hex<<num;
        string word;
        ss>>word;
        return word;
    }
};