class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int leftsmall[n];
        int rightsmall[n];
        stack<int>s;
        for(int i=0;i<n;i++){
            while(s.size() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.empty())leftsmall[i]=0;
            else leftsmall[i]=s.top()+1;
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(s.size() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.empty())rightsmall[i]=n-1;
            else rightsmall[i]=s.top()-1;
            s.push(i);
        }
        int maxA=0;
        for(int i=0;i<n;i++){
            maxA=max(maxA,heights[i]*(rightsmall[i]-leftsmall[i]+1));
            
        }
        return maxA;
    }
};