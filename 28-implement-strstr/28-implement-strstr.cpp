class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())return 0;
        int n=haystack.size();
        int m=needle.size();
    
        if(n<m)return -1;
        for(int i=0;i<=n-m;i++){
            int j;
            for(j=0;j<m;j++){
                if(haystack[i+j]!=needle[j])break;
            }
             if(j==m)return i;
        }
       
       
        return -1;
    }
};