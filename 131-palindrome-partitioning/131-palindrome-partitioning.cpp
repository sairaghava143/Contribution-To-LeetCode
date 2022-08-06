class Solution {
public:
    bool isPalindrom(string s,int start,int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void subset(vector<vector<string>>&ans,vector<string> temp,int index,string s){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrom(s,index,i)){
                temp.push_back(s.substr(index,i-index+1));
                subset(ans,temp,i+1,s);
                temp.pop_back();
            }
            // subset(ans,temp,i+1,s);
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> temp;
        subset(ans,temp,0,s);
        return ans;
    }
};