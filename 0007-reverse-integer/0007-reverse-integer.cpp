class Solution {
public:
    int reverse(int x) {
        bool flag=false;
        if(x<0){
            flag=true;
            x=abs(x);
        }
        string s=to_string(x);
    std::reverse(s.begin(),s.end());
        
        long long y=stoll(s);
        
        if(y>=INT_MAX||y<=INT_MIN)return 0;
    
        
        if(flag)return int(-y);
        return int(y);
    }
};