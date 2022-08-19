class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()>t.size()||s.size()<t.size())return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(auto it:s){
            m1[it]++;
            
        }
        for(auto it:t){
            m2[it]++;
        }
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]!=m2[s[i]])return false;
        }
        return true;
    }
};