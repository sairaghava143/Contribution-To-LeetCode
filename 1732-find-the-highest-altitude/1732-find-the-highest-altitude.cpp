class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxnum=INT_MIN;
        int sum=0;
        
        for(int i=0;i<gain.size();i++){
                        maxnum=max(maxnum,sum);

            sum=sum+gain[i];
            maxnum=max(maxnum,sum);
        }
        return maxnum;
    }
};