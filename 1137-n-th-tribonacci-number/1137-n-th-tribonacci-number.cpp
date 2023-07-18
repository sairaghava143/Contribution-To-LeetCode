class Solution {
public:
    int tribonacci(int n) {
        //normal approach
        if(n<2)return n;
        int a=0,b=1,c=1,d=0;
        while(n-->2){
            d=a+b+c;
            a=b,b=c,c=d;
        }
        return c;
        
    }
};