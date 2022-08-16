class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string x=strs[0];
        string word="";
        for(int j=0;j<x.size();j++){
            bool check=true;
            for(int i=1;i<strs.size();i++){
            if(strs[i][j]!=x[j])check=false;
        }
          
            if(check){
                word+=x[j];
            }else{
                break;
            }
        }
        return word;
        
    }
};