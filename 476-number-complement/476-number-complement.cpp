class Solution {
public:
    int findComplement(int num) {
       string s= bitset<64>(num).to_string();
        int n=s.size();
        int x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                x=i;
                break;
            }
        }
        string y=s.substr(x,n);
        int z=y.size();
        for(int i=0;i<z;i++){
            if(y[i]=='1'){
                y[i]='0';
            }else{
                y[i]='1';
            }
        }
        return stoll(y,0,2);
    }
};