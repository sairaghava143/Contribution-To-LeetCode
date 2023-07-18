class Solution {
public:
    const vector<string> pad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return {};
        vector<string>res;
        res.push_back("");
        for(auto digit:digits){
            vector<string>temp;
            for(auto cand:pad[digit-'0']){
                for(auto s:res){
                    temp.push_back(s+cand);
                }
            }
            res=temp;
        }
        return res;
    }
};