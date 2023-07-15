class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        //brute force
//         vector<int>ans;
//         for(int i=0;i<spells.size();i++){
//             vector<long long>v(potions.size());
//             int count=0;
//             for(int j=0;j<potions.size();j++){
//                 long long x=spells[i],y=potions[j];
//                 v[j]=x*y;
//                  if(v[j]>=success){
//                     count++;
//                 }
//             }
            
//             ans.push_back(count);
//         }
//         return ans;
        
        //binary search approach
        
        int n=spells.size(),m=potions.size();
        sort(potions.begin(),potions.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            int spell=spells[i];
            int start=0,end=m-1;
            while(start<=end){
                int mid=(start+end)/2;
                long long product=(long long)spell*(long long)potions[mid];
                if(product>=success){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
                
            }
            ans.push_back(m-start);
        }
        
         return ans;
    }
};