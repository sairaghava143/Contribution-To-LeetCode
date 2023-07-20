class Solution {
public:
    int minFlips(int a, int b, int c) {
        //bruteforce approach
        int flips=0;
        while(a>0||b>0||c>0){
            int bitA=a&1;
            int bitB=b&1;
            int bitC=c&1;

            if((bitA|bitB)!=bitC){
                if(bitC==0){
                    flips+=(bitA+bitB);
                }else{
                flips++;
            }
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return flips;
        //optimized approach
        
        // int flip1=(__builtin_popcount((a|b)^c));
        // int flip2=(__builtin_popcount(a&b&((a|b)^c)));
        //            return flip1+flip2;

    }
};