class Solution {
public:
    vector<string> findWords(vector<string>& words) {
vector<string>v;
        unordered_map<char,int>m1,m2,m3;
        string s1="qwertyuiop",s2="asdfghjkl",s3="zxcvbnm";
        for(auto it:s1)m1[tolower(it)]++;
        for(auto it:s2)m2[tolower(it)]++;
        for(auto it:s3)m3[tolower(it)]++;
        bool check=false,check2=false,check3=false;
        for(auto it:words){
            for(auto it2:it){
                if(!m1.count(tolower(it2)))check=true;
            }
            if(!check)v.push_back(it);
            check=false;
            
        }
         check=false;
        for(auto it:words){
            for(auto it2:it){
                if(!m2.count(tolower(it2)))check=true;
            }
            if(!check)v.push_back(it);
            check=false;

        }
         check=false;
        for(auto it:words){
            for(auto it2:it){
                if(!m3.count(tolower(it2)))check=true;
            }
            if(!check)v.push_back(it);
            check=false;

        }
return v;
        
    }
};