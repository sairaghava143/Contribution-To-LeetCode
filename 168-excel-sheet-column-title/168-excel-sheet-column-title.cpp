class Solution {
public:
    string convertToTitle(int n) {
        if(n==0){
            return "";
        }
                n--;

       string ans= convertToTitle(n/26)+char('A'+n%26);
        
        return ans;
    }
};