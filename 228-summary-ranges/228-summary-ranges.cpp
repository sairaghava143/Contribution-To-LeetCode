class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty())return {};
        int n=nums.size();
        int mi=nums[0];
        int ma=nums[0];
        vector<string>v;
        for(int i=0;i<n;i++){
            ma=nums[i];
            if(i!=0 && nums[i]!=nums[i-1]+1){
                if(mi!=nums[i-1]){
                                    v.push_back(to_string(mi)+"->"+to_string(nums[i-1]));

                }else{
                    v.push_back(to_string(mi));
                    
                }
                mi=nums[i];
            }
            
        }
        
        if(ma>mi){
             v.push_back(to_string(mi)+"->"+to_string(ma));
        }else{
             v.push_back(to_string(mi));
        }
        
        return v;
    }
};