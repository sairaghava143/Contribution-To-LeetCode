class Solution {
public:
    string removeStars(string s) {
        //bruteforce
        
//         string x;
        
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='*'){
//                 x.pop_back();
            
//             }else{
//                 x+=s[i];
//             }
//         }
//         return x;
        
        //using stack
//         stack<char>st;
        
//         int i=0,n=s.size();
        
//         while(i<n){
//             if(s[i]!='*'){
//                 st.push(s[i]);
//             }else{
//                 st.pop();
//             }
//             i++;
//         }
//         string ans;
//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
        
        //using single pointer approach
        
        int insertindex=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                s[insertindex]=s[i];
                insertindex++;
            }else{
                                insertindex--;

            }
            
        }
        return s.substr(0,insertindex);
        
        
    }
};