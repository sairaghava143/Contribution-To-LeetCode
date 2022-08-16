class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string x=strs[0];
        string y=strs[n-1];
        string word="";
      for(int i=0;i<x.size();i++){
          if(x[i]==y[i]){
              word+=x[i];
          }else{
              break;
          }
      }
        return word;
        
    }
};