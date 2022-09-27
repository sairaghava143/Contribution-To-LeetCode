class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='A')a++;
            if(s[i]=='L')l++;
            else l=0;
            if(a>1 || l>2)return false;
        }
        return true;
    }
};