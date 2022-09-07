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
        long long s=1,e=n,mid=0,x=0;
        while(s<=e){
            mid=(s+e)/2;
            x=guess(mid);
            if(x==0)return mid;
            else if(x==-1){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return -1;
    }
};