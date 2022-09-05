// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,e=n;
        int mid=0;
        
        while(s<e){
            mid=s+(e-s)/2;
            // if(mid<=0)return 1;
            if(isBadVersion(mid)){
                e=mid;
            }else{
                s=mid+1;
            }
            // s++;
            // e--;
        }
        if(e<=0)return 1;
        return e;
    }
};