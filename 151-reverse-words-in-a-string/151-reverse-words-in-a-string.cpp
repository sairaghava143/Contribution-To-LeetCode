class Solution {
public:
    string reverseWords(string s) {
       vector<string>v;
        stringstream ss;
        ss<<s;
        string word;
        while(ss>>word){
            v.push_back(word);
        }
        reverse(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size();i++){
            
            ans+=v[i];
            if(i==v.size()-1)break;
            ans+=" ";
            
        }
        return ans;
    }
};