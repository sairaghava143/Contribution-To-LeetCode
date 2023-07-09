class Solution {
public:
    int compress(vector<char>& chars) {
        char x;
        int i=0;
        int z=0;
        int n=chars.size();
        vector<char>v;
        while(i<n){
            x=chars[i];
            v.push_back(x);
            while(i<n && chars[i]==x){
                i++;
                z++;
            }
            if(z>1){
                string s=to_string(z);
                for(int j=0;j<s.size();j++){
                                    v.push_back(char(s[j]));

                }}
            z=0;
            
        }
        chars=v;
        return v.size();
    }
};