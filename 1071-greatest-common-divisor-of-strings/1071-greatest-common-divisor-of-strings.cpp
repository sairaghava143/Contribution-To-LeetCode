class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
string cant1=str1+str2;
        string cant2=str2+str1;
if(cant1!=cant2)return "";
        int x=gcd(str1.size(),str2.size());
        
        return cant1.substr(0,x);
        
    }
};