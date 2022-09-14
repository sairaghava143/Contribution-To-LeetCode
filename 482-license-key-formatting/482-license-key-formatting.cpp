class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans;
        int n=s.size();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!='-'){
                 if(count>=k){
                    count=0;
                    ans+='-';
                }
                count++;
                ans+=toupper(s[i]);
               
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};