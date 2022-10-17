class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)return true;
        int count=0;
        int m=flowerbed.size();
        if(m<=1){
            if(n<=1 && flowerbed[0]==0)return true;
            return false;
        }
        if(m<=2){
            if(n<=1){
                if(flowerbed[0]==1 || flowerbed[1]==1)return false;
                    return true;
            }
            return false;
        
        }
        for(int i=0;i<m;i++){
            if(flowerbed[i]==0){
                if(i==0 && i+1<m && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    count++;
                }
                
              else  if(i-1>=0 && flowerbed[i-1]==0 && i+1<m && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    count++;
                }
                
               else if(i==m-1 && i-1>=0 && flowerbed[i-1]==0){
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        if(n<=count)return true;
        return false;
    }
};