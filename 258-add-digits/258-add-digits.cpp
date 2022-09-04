class Solution {
public:
    int addDigits(int num) {
        if(num<=9)return num;
        
        while(true){
            int x=0;
            while(num){
                x+=(num%10);
                num/=10;
            }
            if(x<=9)return x;
            num=x;
        }
        return false;
        
    }
};