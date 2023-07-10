class Solution {
public:
    string removeStars(string s) {
        //bruteforce
        
        string x;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                x.pop_back();
            
            }else{
                x+=s[i];
            }
        }
        return x;
    }
};