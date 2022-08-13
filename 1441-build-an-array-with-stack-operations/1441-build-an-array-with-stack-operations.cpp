class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int top=1;
        vector<string>ans;
        for(int i=0;i<target.size();i++){
            while(top!=target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                top++;
            }
            ans.push_back("Push");
            top++;
        }
        return ans;
    }
};