class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int m) {
        
    int n=flowerbed.size();
        if(n<2 && m==1){
            if(flowerbed[0]==1)return false;
            return true;
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(n<=x)return true;
            if(i-1>=0 && i+1<n && flowerbed[i-1]==0 && flowerbed[i]==0 &&flowerbed[i+1]==0 ){
                x++;
                flowerbed[i]=1;
                
            }
            if(i==0){
                if(flowerbed[i]==0  && i+1<n && flowerbed[i+1]==0 ){
                    x++;
                      flowerbed[i]=1;
                }
            }
            if(i==n-1){
                if(flowerbed[i]==0  && i-1>=0 && flowerbed[i-1]==0 ){
                    x++;
                      flowerbed[i]=1;
                }
            }
        }
        return m<=x;
    }
};