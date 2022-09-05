class Solution {
public:
    bool wordPattern(string pattern, string s) {
           stringstream ss(s);
        string st;
        vector<string>v;
        while(ss>>st){
            v.push_back(st);
        }
        unordered_map<char,string>m1;
       unordered_set<string>se;
        int n=pattern.size();
        if(n!=v.size())return false;
        for(int i=0;i<n;i++){
            if(!m1.count(pattern[i]) && !se.count(v[i])){
                  m1[pattern[i]]=v[i];
            se.insert(v[i]);
            }
            else if(m1.count(pattern[i]) && !se.count(v[i])){
                return false;
            }else if(m1[pattern[i]]!=v[i])return false;
      
        }
        return true;
    }
};