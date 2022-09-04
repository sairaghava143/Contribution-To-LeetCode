class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m;
        unordered_set<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!m.count(s[i]) && !st.count(t[i])){
                m[s[i]]=t[i];
                st.insert(t[i]);
            }else if(!m.count(s[i]) && st.count(t[i])){
                return false;
            }else if(m[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};