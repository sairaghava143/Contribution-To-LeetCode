class Solution {
public:
    string reverseWords(string s) {
        //n n
//        vector<string>v;
//         stringstream ss;
//         ss<<s;
//         string word;
//         while(ss>>word){
//             v.push_back(word);
//         }
//         reverse(v.begin(),v.end());
//         string ans="";
//         for(int i=0;i<v.size();i++){
            
//             ans+=v[i];
//             if(i==v.size()-1)break;
//             ans+=" ";
            
//         }
//         return ans;
        
        //n 1
        reverse(s.begin(),s.end());
        int l=0,r=0,i=0,n=s.size();
        while(i<n){
            while(i<n && s[i]!=' '){
                s[r++]=s[i++];
            }
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                            if(i==n)break;

                s[r++]=' ';
            }
            l=r;
            i++;
        }
        if(r>0 && s[r-1]==' ')r--;
        s.resize(r);
        return s;
    }
};