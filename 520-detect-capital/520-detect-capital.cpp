class Solution {
public:
    bool detectCapitalUse(string word) {
        int count1=0,count2=0,count3=0;
        bool check=false;
        for(auto &it:word){
            if(it>='A' && it<='Z')count1++;
            if(it>='a' && it<='z')count2++;
            if((it>='A' && it<='Z' && !check)||(it>='a' && it<='z') ){count3++;check=true;}
        }
        if(count1==word.size())return true;
        if(count2==word.size())return true;
        if(count3==word.size())return true;
return false;
    }
};