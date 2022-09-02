class Solution {
public:
    int titleToNumber(string s) {
        long long pow=1;
        int ans=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            ans+=int(s[i]-'A'+1)*pow;
            
            pow*=26;
        }
        return ans;
    }
};