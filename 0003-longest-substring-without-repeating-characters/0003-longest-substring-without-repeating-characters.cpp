class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> char_map;
        int max_length = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            if (char_map.find(s[right]) != char_map.end() && char_map[s[right]] >= left) {
                left = char_map[s[right]] + 1;
            }
            char_map[s[right]] = right;
            max_length = max(max_length, right - left + 1);
        }

        return max_length;
    }
};
