class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>s1,s2;
        int n1=nums1.size(),n2=nums2.size();
      for(int i=0;i<n2;i++){
            s2[nums2[i]]++;
        }
        vector<int>v;
        
        for(int i=0;i<n1;i++){
           if(s2.count(nums1[i])){
               v.push_back(nums1[i]);
               s2[nums1[i]]--;
               if(s2[nums1[i]]==0){
                   s2.erase(nums1[i]);
               }
           }
        }
        
       
        return v;
    }
};