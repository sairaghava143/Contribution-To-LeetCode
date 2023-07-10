class Solution {
public:
    bool closeStrings(string s1, string s2) {
        //bruteforce
//         if(s1.size()!=s2.size())return false;
//         unordered_map<char,int>m1,m2;
//         for(auto it:s1)m1[it]++;
//         for(auto it:s2)m2[it]++;
//         vector<int>v1,v2;
//         for(auto it:s1){
//             if(!m2.count(it))return false;
//         }
//           for(auto it:s2){
//             if(!m1.count(it))return false;
//         }
        

//         for(auto it:m1){
//             v1.push_back(it.second);
//         }
//          for(auto it:m2){
//             v2.push_back(it.second);
//         }
        
//         sort(v1.begin(),v1.end());
//         sort(v2.begin(),v2.end());
//         if(v1.size()!=v2.size())return false;
//         for(int i=0;i<v1.size();i++){
//             if(v1[i]!=v2[i])return false;
//         }
// return true;

        
        //optimized approach
        if(s1.size()!=s2.size())return false;
    vector<int> v1(26,0),v2(26,0),v3(26,0),v4(26,0);
        
        for(auto it:s1){
            v1[it-'a']++;
            v3[it-'a']=1;
        }
         for(auto it:s2){
            v2[it-'a']++;
            v4[it-'a']=1;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        return (v1==v2) && (v3==v4);

    }
};