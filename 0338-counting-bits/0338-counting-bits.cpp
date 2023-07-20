class Solution {
public:
    vector<int> countBits(int n) {
        //normal approach by observing pattern
//         vector<int>v(n+1);
//         for(int i=0;i<=n;i++){
//             v[i]=v[i/2]+(i%2);
//         }
        
//         return v;
        // similar pattern
//           vector<int>v(n+1);
//         v[0]=0;
//         for(int i=1;i<=n;i++){
//             v[i]=v[i/2]+(i%2);
//         }
        
//         return v;
        
        //bits using pattern
          vector<int>v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++){
            v[i]=v[i>>1]+(i&1);
        }
        
        return v;
    }
};