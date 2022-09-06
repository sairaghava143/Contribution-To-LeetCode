class Solution {
public:
    vector<int> countBits(int n) {
        bitset<32>x;
        vector<int>v;
       for(int i=0;i<=n;i++){
           x=i;
           v.push_back(x.count());
       } 
        return v;
    }
};