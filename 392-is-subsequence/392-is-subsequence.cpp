class Solution {
public:
    bool isSubsequence(string s, string t) {
        //two pointers
        int x=s.size(),y=t.size();
        int j=0;
        for(int i=0;i<y and j<x;i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        if(j==x)return true;
        return false;
    }
};