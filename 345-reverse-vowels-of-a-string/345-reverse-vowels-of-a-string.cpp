class Solution {
public:
        bool vowel(char &a){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            return true;
        }
             if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int x=-1;
  vector<int>v;
        for(int i=0;i<n;i++){
            if(vowel(s[i])){
               v.push_back(i);
            }
        }
        int st=0,e=v.size()-1;
        while(st<=e){
            swap(s[v[st++]],s[v[e--]]);
        }
       
        return s;
    }
};