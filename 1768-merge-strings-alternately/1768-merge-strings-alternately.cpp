class Solution {
public:
    string mergeAlternately(string word1, string word2) {
              int size1 = word1.size();
        int size2 = word2.size();
        string mergeWord;
        mergeWord.reserve(size1 + size2);

        int i = 0, j = 0;
        while (i < size1 && j < size2) {
            mergeWord.push_back(word1[i++]);
            mergeWord.push_back(word2[j++]);
        }

        if (i < size1) {
            mergeWord.append(word1.substr(i));
        } else {
            mergeWord.append(word2.substr(j));
        }

        return mergeWord;
    }
};
