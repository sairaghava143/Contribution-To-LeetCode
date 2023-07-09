class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0,res=0,n=chars.size();
        while(i<n){
            if(i==n-1 || chars[i+1]!=chars[i]){
                chars[res]=chars[j];
                res++;
                int len=i-j+1;
                if(len>1){
                  string s=to_string(len);
                    for(int k=0;k<s.size();k++){
                        chars[res]=char(s[k]);
                        res++;
                    }
                }
                j=i+1;
            }
            i++;
            
        }
        return res;
        
        
    }
};