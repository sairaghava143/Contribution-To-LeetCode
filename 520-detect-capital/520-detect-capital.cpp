class Solution {
public:
    bool detectCapitalUse(string word) {
        int count1=0,count2=0,count3=0;
        bool check=false;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z')count1++;
            if(word[i]>='a' && word[i]<='z')count2++;
            if((word[i]>='A' && word[i]<='Z' && !check)||(word[i]>='a' && word[i]<='z') ){count3++;check=true;}
            if(!(count1==i+1 || count2==i+1 || count3==i+1))return false;
        }
        if(count1==word.size())return true;
        if(count2==word.size())return true;
        if(count3==word.size())return true;
return false;
    }
};