class Solution {
public:
    int myAtoi(string s) {
        int i=0,sign=1,ans=0;
        while(s[i]==' ')i++;
        if(s[i]=='-'|| s[i]=='+'){
            sign=s[i]=='-'?-1:1;
     
            i++;
        }
        while(s[i]>='0' && s[i]<='9'){
            if(ans>INT_MAX/10 ||(s[i]-'0'>7 && ans==INT_MAX/10)){
            return sign==-1?INT_MIN:INT_MAX;
            }
            ans=ans*10+(s[i]-'0');
            i++;
        }
        return sign*ans;
    }
};