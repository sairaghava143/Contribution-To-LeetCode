/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long i=1,j=n;
        while(i<=j){
            int g=(i+j)/2;
            int x=guess(g);
        if(x==0){
            return g;
        }else if(x==-1){
            j=g-1;
        }else if(x==1){
            i=g+1;
        }
        }
        return -1;
    }
};