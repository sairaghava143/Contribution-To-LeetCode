class Solution {
public:
    int longestPalindrome(string s) {
        int odds=0;
        for(char c='A';c<='z';c++){
            odds+=count(s.begin(),s.end(),c)&1;
        }
 
       int n=s.size();
        n-=odds;
        if(odds>0)n++;
        return n;
        

    }
};