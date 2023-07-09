class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,n=t.size();
        int c1=0,c2=0;
        while(i<n){
            if(t[i]==s[j]){
                j++;
                i++;
            }else{
                i++;
            }
            
        }
        if(j==s.size())return true;
        return false;
        
        
    }
};