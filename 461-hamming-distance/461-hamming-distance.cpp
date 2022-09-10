class Solution {
public:
    int hammingDistance(int x, int y) {
        string s=bitset<32>(x).to_string();
        string t=bitset<32>(y).to_string();
        int n1=s.size(),n2=t.size();
int count=0;
        for(int i=0;i<n1;i++){
if(s[i]=='0'&& t[i]=='1')count++;
            if(s[i]=='1'&& t[i]=='0')count++;

        }
 
        return count;

    }
};