class Solution {
public:
    int maxArea(vector<int>& height) {
        //two pointer approach 
        int maxwater=0;
        int left=0,right=height.size()-1;
        while(left<right){
            int h=min(height[left],height[right]);
            maxwater=max(maxwater,h*(right-left));
                         while(height[left]<=h && left<right)left++;

             while(height[right]<=h && left<right)right--;
}
        return maxwater;
    }
};