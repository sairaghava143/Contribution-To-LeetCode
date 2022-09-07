class Solution {
public:
    bool canConstruct(string s1, string s2) {
        
unordered_map<char,int>m1,m2;
        int n1=s1.size(),n2=s2.size();
        for(int i=0;i<n1;i++){
            m1[s1[i]]++;
        }
          for(int i=0;i<n2;i++){
            m2[s2[i]]++;
        }
        
         for(int i=0;i<n1;i++){
           if(m1[s1[i]]>m2[s1[i]])return false;
        }
        return true;
    }
};