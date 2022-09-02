class Solution {
public:
    int titleToNumber(string s) {
        int temp=0;
        
        for( char &c:s){
            int n=int(c-'A'+1);
            
            temp=temp*26+n;
        }
        return temp;
    }
};