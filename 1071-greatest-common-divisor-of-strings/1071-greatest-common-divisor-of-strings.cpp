class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string base=(str1.size()<str2.size())?str1:str2;
     for(int i=base.size();i>=1;i--){
         string cand=str1.substr(0,i);
         
         if(isDivisor(str1,cand) && isDivisor(str2,cand)){
             return cand;
         }
     }
        return "";
    }
    
    bool isDivisor(string str,string cand){
        if(str.size()%cand.size()!=0)return false;
        
        int rep=str.size()/cand.size();
        string concat;
        for(int i=0;i<rep;i++){
            concat+=cand;
        }
                return concat==str;

    }
    
};