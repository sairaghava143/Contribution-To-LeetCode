class Solution {
public:
    int maxVowels(string s, int k) {
        string a="aeiou";
        int count=0,maxcount=INT_MIN;
        for(int i=0;i<k;i++){
            if(a.find(s[i])!=string::npos){
                count++;
            }
        }
        maxcount=count;
        
        for(int i=k;i<s.size();i++){
             if(a.find(s[i])!=string::npos){
                count++;
            }
             if(a.find(s[i-k])!=string::npos){
                count--;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};