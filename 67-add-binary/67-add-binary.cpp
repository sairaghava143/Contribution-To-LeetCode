class Solution {
public:
    string addBinary(string a, string b) {
        int alen=a.size();
        int blen=b.size();
        int i=0,carry=0;
        string ans="";
        while(i<alen||i<blen||carry!=0){
            int x=0,y=0;
            if(i<alen && a[alen-i-1]=='1'){
                x=1;
            }  if(i<blen && b[blen-i-1]=='1'){
                y=1;
            }
            ans=to_string((x+y+carry)%2)+ans;
            carry=(x+y+carry)/2;
            i++;
        }
        return ans;
    }
};