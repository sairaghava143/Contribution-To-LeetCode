class Solution {
public:
    // int lefth(vector<int>v,int j){
    //     int ans=0;
    //     for(int i=j;i>=0;i--){
    //         ans=max(ans,v[i]);
    //     }
    //     return ans;
    // }
    // int righth(vector<int>v,int j){
    //     int ans=0;
    //     for(int i=j;i<v.size();i++){
    //         ans=max(ans,v[i]);
    //     }
    //     return ans;
    // }
    //  int lefth(vector<int>v,int j){
    //     int ans=0;
    //     for(int i=0;i<=j;i++){
    //         ans=max(ans,v[i]);
    //     }
    //     return ans;
    // }
    // int righth(vector<int>v,int j){
    //     int ans=0;
    //     for(int i=j;i<v.size();i++){
    //         ans=max(ans,v[i]);
    //     }
    //     return ans;
    // }
    int trap(vector<int>& height) {
        //brute force
        // int n=height.size();
        // int totalwater=0;
        // for(int i=0;i<n;i++){
        //     int leftmax=lefth(height,i);
        //     int rightmax=righth(height,i);
        //     int currentwater=min(leftmax,rightmax)-height[i];
        //     totalwater+=currentwater;
        // }
        // return totalwater;
        
        ///better brute force approach
        // int n=height.size();
        // vector<int>leftmax(n),rightmax(n);
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     ans=max(ans,height[i]);
        //     leftmax[i]=ans;
        // }
        // ans=0;
        // for(int i=n-1;i>=0;i--){
        //     ans=max(ans,height[i]);
        //     rightmax[i]=ans;
        // }
        // int totalans=0;
        // for(int i=0;i<n;i++){
        //   totalans+=min(leftmax[i],rightmax[i])-height[i];
        // }
        // return totalans;
        
        ///optimized two pointer approach
        int n=height.size();
        int left=0,right=n-1;
        int leftmax=0,rightmax=0,totalans=0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=leftmax){
                leftmax=height[left];
            }else{
                totalans+=leftmax-height[left];
            }
                                left++;

            }else{
                 if(height[right]>=rightmax){
                rightmax=height[right];
            }else{
                totalans+=rightmax-height[right];
            }
                                right--;

            }
            
           
            
        }
        
        return totalans;
        
        
    }
};