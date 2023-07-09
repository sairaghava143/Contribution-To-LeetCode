class Solution {
public:
    string reverseVowels(string s) {
        //two pointer approach
        
        int start=0;
        int end=s.size()-1;
        string vowels="aeiouAEIOU";
        while(start<end){
            while(start<end && vowels.find(s[start])==string::npos){
                start++;
            }
            while(start<end && vowels.find(s[end])==string::npos){
                end--;
            }
            
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};