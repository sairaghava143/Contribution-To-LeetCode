class Solution {
public:
    vector<string> findWords(vector<string>& words) {
vector<string>v;
        unordered_map<char,int>m1,m2,m3;
        string s1="qwertyuiop",s2="asdfghjkl",s3="zxcvbnm";
        for(auto it:s1)m1[tolower(it)]++;
        for(auto it:s2)m2[tolower(it)]++;
        for(auto it:s3)m3[tolower(it)]++;
        bool check1=false,check2=false,check3=false;
        for(auto it:words){
            for(auto it2:it){
                if(!m1.count(tolower(it2))){check1=true;break;}
            }
            if(!check1)v.push_back(it);
            check1=false;
             for(auto it2:it){
                if(!m2.count(tolower(it2))){check2=true;break;}
            }
            if(!check2)v.push_back(it);
            check2=false;
             for(auto it2:it){
                if(!m3.count(tolower(it2))){check3=true;break;}
            }
            if(!check3)v.push_back(it);
            check3=false;
            
        }
         
return v;
        
    }
};