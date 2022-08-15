class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>s;
         int maxA=0;
        for(int i=0;i<=n;i++){
            while(s.size() &&( i==n || heights[s.top()]>=heights[i])){
                int height=heights[s.top()];
                s.pop();
                int width;
                
                if(s.empty())width=i;
                else width=(i-s.top()-1);
                maxA=max(maxA,width*height);
        
            }
            s.push(i);
        }
        return maxA;
    }
};