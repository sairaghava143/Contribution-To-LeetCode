class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int count=0;
        string temp;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!='-'){
                count++;
                temp+=toupper(s[i]);
            }
        
        }
        if(count==0)return "";
        int y=count%k;
        int i=0;
        string ans;
        while(i<y){
            ans+=temp[i++];
        }
        if(ans.size())ans+='-';
        int z=temp.size();
        int u=0;
        while(i<z){
            ans+=temp[i++];
            u++;
            if(u>=k){
                u=0;
                ans+='-';
            }
        }
        
        ans.pop_back();
        return ans;
    }
};