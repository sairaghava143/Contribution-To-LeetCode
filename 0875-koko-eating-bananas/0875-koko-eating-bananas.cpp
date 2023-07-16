class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //brute force
//         int maxpile=*max_element(piles.begin(),piles.end());
        
//         for(int k=1;k<=maxpile;k++){
//             long long tothour=0;
//             for(auto pile:piles){
//                 tothour+=(pile+k-1)/k;
//             }
//             if(tothour<=h){
//                 return k;
//             }
            
//         }
//         return -1;
        
        //using binary search
        
        int left=1,right=*max_element(piles.begin(),piles.end());
        while(left<right){
            int mid=left+(right-left)/2;
            int tothour=0;
            for(auto pile:piles){
                tothour+=(pile+mid-1)/mid;
            }
            if(tothour>h){
                left=mid+1;
            }else{
                right=mid;
            }
            
        }
        return left;
    }
};