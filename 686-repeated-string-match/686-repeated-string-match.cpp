class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp=a;
        int count=1;
        while(a.size()<b.size()){
            a+=temp;
            count++;
        }
        if(a.find(b)!=string::npos)return count;
        a+=temp;
        if(a.find(b)!=string::npos)return count+1;
        return -1;
    }
};