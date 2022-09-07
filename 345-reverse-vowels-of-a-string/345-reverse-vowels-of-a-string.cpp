class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char>vowel={'a','e','i','o','u','A','E',
                                 'I','O','U'};
        int st=0,e=s.size()-1;
    
        while(1){
            while(st<e && !vowel.count(s[st])){
                st++;
            }
            while(st<e && !vowel.count(s[e])){
                e--;
            }

            if(e<=st){
              return s;

            }
         swap(s[st++],s[e--]);
        }
        return s;
    }
};