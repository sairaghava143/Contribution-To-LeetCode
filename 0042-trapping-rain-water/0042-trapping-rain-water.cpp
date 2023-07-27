class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<=2){
            return 0; //cannot trap water if there are less than 3 blocks

        }
        int leftmax=0;
        int rightmax=0;
        int left=0;
        uint right=n-1;
        int trappedwater=0;

        while(left<right){
            if(height[left]<height[right]){
                //process of left side
                if(height[left]>=leftmax){
                    leftmax=height[left];
                }else{
                    trappedwater+=leftmax-height[left];
                }
                left++;
            }else{
                //process of righht side
                if(height[right]>=rightmax){
                    rightmax=height[right];

                }else{
                    trappedwater+=rightmax-height[right];
                }
                right--;
            }
        }
        return trappedwater;
    }
};