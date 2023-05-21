class Solution {
public:
    bool isMatch(string s, string p) {
        int s_ptr = 0, p_ptr = 0, match = -1, star_idx = -1;
        while (s_ptr < s.size()) {
            if (p_ptr < p.size() && (p[p_ptr] == '?' || p[p_ptr] == s[s_ptr])) {
                s_ptr++;
                p_ptr++;
            } else if (p_ptr < p.size() && p[p_ptr] == '*') {
                star_idx = p_ptr;
                p_ptr++;
                match = s_ptr;
            } else if (star_idx != -1) {
                p_ptr = star_idx + 1;
                match++;
                s_ptr = match;
            } else {
                return false;
            }
        }
        while (p_ptr < p.size() && p[p_ptr] == '*') {
            p_ptr++;
        }
        return p_ptr == p.size();
    }
};