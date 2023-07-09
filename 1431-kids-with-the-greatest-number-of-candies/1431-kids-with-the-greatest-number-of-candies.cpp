class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int x=*max_element(candies.begin(),candies.end());
        int n=candies.size();
        vector<bool> v(n);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=x){
                v[i]=true;
            }else{
                v[i]=false;
            }
        }
        return v;
    }
};