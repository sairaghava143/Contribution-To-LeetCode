class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>s;
        vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char,string>m;
        for(char c='a';c<='z';c++){
            m[c]=v[c-'a'];
        }
        for(int i=0;i<words.size();i++){
            string x;
            for(int j=0;j<words[i].size();j++){
                x+=m[words[i][j]];
            }
            s.insert(x);
        }
        return s.size();
    }
};