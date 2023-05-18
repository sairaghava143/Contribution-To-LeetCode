class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) {
            return result;
        }
        int n = s.size(), m = words.size(), k = words[0].size();
        unordered_map<string, int> freq;
        for (const string& word : words) {
            freq[word]++;
        }
        for (int i = 0; i < k; i++) {
            int left = i, count = 0;
            unordered_map<string, int> seen;
            for (int j = i; j <= n - k; j += k) {
                string word = s.substr(j, k);
                if (freq.count(word)) {
                    seen[word]++;
                    count++;
                    while (seen[word] > freq[word]) {
                        string leftWord = s.substr(left, k);
                        seen[leftWord]--;
                        count--;
                        left += k;
                    }
                    if (count == m) {
                        result.push_back(left);
                        string leftWord = s.substr(left, k);
                        seen[leftWord]--;
                        count--;
                        left += k;
                    }
                } else {
                    seen.clear();
                    count = 0;
                    left = j + k;
                }
            }
        }
        return result;
    }
};