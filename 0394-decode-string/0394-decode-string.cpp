class Solution {
public:
    string decodestring(int &i,const string &s){
        string res;
        while(i<s.size() && s[i]!=']'){
            if(!isdigit(s[i])){
                res+=s[i];
                i++;
                    
            }else{
                int n=0;
                while(i<s.size() && isdigit(s[i])){
                    n=n*10+s[i]-'0';
                    i++;
                    
                }
                i++;
                string t=decodestring(i,s);
                i++;
                
                while(n-->0){
                    res+=t;
                }
                
            }
            
            
        }
        return res;
    }
    string decodeString(string s) {
        //using recurrsive approach
        int i=0;
        return decodestring(i,s);
    }
};