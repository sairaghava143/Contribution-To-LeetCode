class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        int ans=0;
        bool odd_found=false;
        for(auto &it:s){
            m[it]++;
        }
        for(auto &it:m){
    
            if(it.second%2==0){
                ans+=it.second;
            }else{
                odd_found=true;
                ans+=it.second-1;
            }
        }
        if(odd_found){
            ans++;
        }
        return ans;
    }
    
};