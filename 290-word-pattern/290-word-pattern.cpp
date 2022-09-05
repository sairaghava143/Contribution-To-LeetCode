class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int>m1;
        unordered_map<string,int>m2;
        istringstream ss(s);
        string word;
        int i=0;
        int n=pattern.size();
      for(word;ss>>word;i++){
          if(i==n || m1[pattern[i]]!=m2[word]){
              return false;
          }
          m1[pattern[i]]=m2[word]=i+1;
      }
        return i==n;
            
    }
};