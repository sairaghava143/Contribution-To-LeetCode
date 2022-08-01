class Solution {
public:
    bool norepeatation(string s,int start,int end){
        unordered_map<char,int>m;
        for(int i=start;i<=end;i++){
            if(m.count(s[i]))return false;
            m[s[i]]++;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        ///brute force approch
//         int count=0;
        
//         for(int i=0;i<s.size();i++){
//             for(int j=i;j<s.size();j++){
//                 if(norepeatation(s,i,j)){
//                     count=max(count,j-i+1);
//                 }
//             }
//         }
//         return count;
        
        //optinmized approach
//         unordered_map<char,int>m;
        
//         int count=0;
//     int left=0,right=0;
        
        
//         while(right<s.size()){
//            if(m.count(s[right]))left=max(left,m[s[right]]+1);
            
//             m[s[right]]=right;
//             count=max(count,right-left+1);
//             right++;
//         }
        
//         return count;
        
        
        unordered_map<char,int>m;
        int left=0,right=0;
        int len=0;
        while(right<s.size()){
            if(m.count(s[right]))left=max(left,m[s[right]]+1);
            m[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
        
    }
};