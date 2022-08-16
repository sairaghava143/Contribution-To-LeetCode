class Solution {
public:
    string longestPalindrome(string s) {
        int st=0,e=0,maxlen=1;
        int n=s.size();
        //odd
    
            for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            while(l>=0 && r<n ){
                if(s[l]==s[r]){
                   l--;
                r++; 
                }else{
                    break;
                }
                
            }
                int length=r-l-1;
            if(length>maxlen){
                maxlen=length;
                st=l+1;
                e=r-1;
            }
        }
      
         //even
    
            for(int i=0;i<n;i++){
            int l=i;
            int r=i+1;
            while(l>=0 && r<n ){
                if(s[l]==s[r]){
                   l--;
                r++; 
                }else{
                    break;
                }
                
            }
                int length=r-l-1;
            if(length>maxlen){
                maxlen=length;
                st=l+1;
                e=r-1;
            }
        }
        
        return s.substr(st,maxlen);
        
    }
};