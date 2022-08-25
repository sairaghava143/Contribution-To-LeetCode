class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        string s=to_string(x);
string s2=s;
        reverse(s.begin(),s.end());
        string s1=s;
        for(int i=0;i<s.size();i++){
            if(s2[i]!=s1[i])return false;
        }
        return true;
        
    }
};