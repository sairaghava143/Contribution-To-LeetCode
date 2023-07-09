class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        stringstream ss(s);
        
        string temp;
        
        while(ss>>temp){
            v.push_back(temp);
        }
        string ans;
        for(int i=v.size()-1;i>=0;i--){
            if(i!=v.size()-1)ans+=" ";
            ans+=v[i];
        }
        return ans;
    }
};