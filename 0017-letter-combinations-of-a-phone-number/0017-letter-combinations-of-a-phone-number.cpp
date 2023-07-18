class Solution {
public:
    const vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        vector<string> res;
        
        string builder;
        build(builder, 0, res, digits);
        return res;
    }
    void build(string builder, int i, vector<string> &res, string &digits) {
        if (i == digits.size()) {
            res.push_back(builder);
            return;
        }
        int j = digits[i] - '0';
        for (char c : pad[j]) {
            build(builder + c, i + 1, res, digits);
        }
    }
};