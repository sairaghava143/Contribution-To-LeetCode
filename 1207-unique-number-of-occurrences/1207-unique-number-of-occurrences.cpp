class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        vector<int>v;
        for(auto it:mp){
            v.push_back(it.second);
        }
        unordered_map<int,int>mp1;
        for(auto it:v){
            mp1[it]++;
        }
        for(auto it:mp1){
            if(it.second>1)return false;
        }
        return true;
    }
    
};