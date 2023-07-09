class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                v.push_back(s[i]);
            }
        }
    
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=v.back();
                v.pop_back();
            }
        }
        return s;
        
    }
};