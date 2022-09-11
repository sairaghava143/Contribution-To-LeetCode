class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>s;
        vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
   
       
        for(int i=0;i<words.size();i++){
            string x;
            for(int j=0;j<words[i].size();j++){
                x+=v[words[i][j]-'a'];
            }
            s.insert(x);
        }
        return s.size();
    }
};