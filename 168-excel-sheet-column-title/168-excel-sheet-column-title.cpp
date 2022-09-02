class Solution {
public:
    string convertToTitle(int n) {
        if(n==0){
            return "";
        }
          
        
        return convertToTitle(--n/26)+char('A'+n%26);
    }
};