class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s;
        s+=s;
        
        return s.substr(1,s.size()-2).find(str)!=string::npos;
    }
};