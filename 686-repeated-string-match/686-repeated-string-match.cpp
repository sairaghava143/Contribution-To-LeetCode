class Solution {
public:
    //learnt new thing find substring
    bool check(string a,string b){
        int n=a.size();
        int m=b.size();
        for(int i=0;i<=n-m;i++){
            int j;
            for(j=0;j<m;j++){
                if(a[i+j]!=b[j])break;
            }
            if(j==m)return 1;
        }
        return 0;
        
        
    }
    int repeatedStringMatch(string a, string b) {
        string temp=a;
        int ans=1;
        while(a.size()<b.size()){
            a+=temp;
            ans++;
        }
        if(check(a,b)){
            return ans;
        }
        if(check(a+temp,b)){
            return ans+1;
        }
        return -1;
    }
};