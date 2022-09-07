class Solution {
public:
    string reverseVowels(string s) {
        int st=0,e=s.size()-1;
        int i=0,j=0;
        while(st<e){
            st=s.find_first_of("aeiouAEIOU",st);
            e=s.find_last_of("aeiouAEIOU",e);
            if(st<e){
                swap(s[st++],s[e--]);

            }
       
        }
        return s;
    }
};