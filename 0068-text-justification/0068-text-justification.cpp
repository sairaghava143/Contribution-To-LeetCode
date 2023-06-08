class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int curWidth = 0;
        vector<string> curLine;
        for (int i = 0; i < words.size(); i++) {
            if (curWidth + curLine.size() + words[i].size() > maxWidth) {
                int spacesNeeded = maxWidth - curWidth;
                int spaceCount = curLine.size() > 1 ? spacesNeeded / (curLine.size() - 1) : spacesNeeded;
                int extraSpaces = curLine.size() > 1 ? spacesNeeded % (curLine.size() - 1) : 0;
                string line = curLine[0];
                if (curLine.size() == 1) {
                    line += string(spaceCount, ' ');
                } else {
                    for (int j = 1; j < curLine.size(); j++) {
                        line += string(spaceCount, ' ');
                        if (j <= extraSpaces) {
                            line += ' ';
                        }
                        line += curLine[j];
                    }
                }
                result.push_back(line);
                curWidth = 0;
                curLine.clear();
            }
            curLine.push_back(words[i]);
            curWidth += words[i].size();
        }
        string lastLine = curLine[0];
        for (int i = 1; i < curLine.size(); i++) {
            lastLine += ' ' + curLine[i];
        }
        lastLine += string(maxWidth - lastLine.size(), ' ');
        result.push_back(lastLine);
        return result;
    }
};