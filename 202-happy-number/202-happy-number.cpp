class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        int x=0;
        while(true){
     if(!s.count(n)){
               s.insert(n);
           }else{
               return false;
           }
            
            while(n){
                x+=pow((n%10),2);
                n/=10;
            }
            if(x==1){
                return true;
            }
            n=x;
            x=0;
          
        }
        return false;
    
    }
};