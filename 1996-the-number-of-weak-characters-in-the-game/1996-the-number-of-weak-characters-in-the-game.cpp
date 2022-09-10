class Solution {
public:
    struct cmp{
        bool operator()(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    };
    
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),[](vector<int>&a,vector<int>&b){
             if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
        });
        int maxval=INT_MIN;
        int n=p.size();
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(p[i][1]<maxval){
                ans++;
            }
            maxval=max(p[i][1],maxval);
        }
        return ans;
        
    }
};