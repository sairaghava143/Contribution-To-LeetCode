class Solution {
public:
    bool closeStrings(string s1, string s2) {
        if(s1.size()!=s2.size())return false;
        unordered_map<char,int>m1,m2;
        for(auto it:s1)m1[it]++;
        for(auto it:s2)m2[it]++;
vector<int>v1,v2;
        for(auto it:s1){
            if(!m2.count(it))return false;
        }
          for(auto it:s2){
            if(!m1.count(it))return false;
        }
        

        for(auto it:m1){
            v1.push_back(it.second);
        }
         for(auto it:m2){
            v2.push_back(it.second);
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1.size()!=v2.size())return false;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i])return false;
        }
return true;


    }
};