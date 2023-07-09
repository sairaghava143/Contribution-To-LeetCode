class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string x;
        int i=0;
        int n=s.size();
        while(i<n){
            x="";
            while(s[i]==' ' && i<n){
                i++;
            }
            while(s[i]!=' ' && i<n){
                x+=s[i];
                i++;
            }
            v.push_back(x);
            while(s[i]==' ' && i<n){
                i++;
            };
            
        }
        reverse(v.begin(),v.end());
        string y;
        if(v.size()>1){
          y+=v[0];
        y+=" ";
        for(int i=1;i<v.size()-1;i++){
                        y+=v[i];

            y+=" ";
        }
        y+=v.back();
        return y;  
        }
        return v[0];
        
        
    }
};