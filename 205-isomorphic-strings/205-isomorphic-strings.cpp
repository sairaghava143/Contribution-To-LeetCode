class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>v1(256,0),v2(256,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            if(v1[s[i]]!=v2[t[i]])return false;
            v1[s[i]]=i+1;
            v2[t[i]]=i+1;
        }
        return true;
        
        
    }
};