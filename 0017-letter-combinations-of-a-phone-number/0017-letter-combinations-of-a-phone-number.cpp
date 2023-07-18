class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        vector<string> res;
        const vector<string> pad = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string builder;
        build(builder, 0, res, digits, pad);
        return res;
    }
    void build(string builder, int i, vector<string> &res, string &digits, const vector<string> &pad) {
        if (i == digits.size()) {
            res.push_back(builder);
            return;
        }
        int j = digits[i] - '0';
        for (char c : pad[j]) {
            build(builder + c, i + 1, res, digits, pad);
        }
    }
};