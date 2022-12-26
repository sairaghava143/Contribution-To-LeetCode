class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int carry=1;
        int n=a.size();
        for(int i=n-1;i>=0;i--){
            a[i]+=carry;
            carry=a[i]/10;
            a[i]=a[i]%10;
        }
        cout<<carry;
        if(carry){
            a.push_back(0);
            for(int i=n;i>=1;i--){
                a[i]=a[i-1];
                
            }
            a[0]=carry;
            
        
    }
        return a;
    }
};