class Solution {
public:
    int reverse(int x) {
        
        string s=to_string(x);
        cout << s ;
        
    // if(s.size()>=10)return 0;
        long long st=0,e=s.size()-1;
        bool check=false;
        while(st<=e){
            if(s[st]=='-' || s[e]=='-')check=true;
            swap(s[st],s[e]);
            st++;
            e--;
        }
     // std::reverse(s.begin(),s.end());
        
        
        long long y=stoll(s);
        if(y>INT_MAX||y<INT_MIN)return 0;
        if(check)return int(-y);
        return int(y);
    
    }
};