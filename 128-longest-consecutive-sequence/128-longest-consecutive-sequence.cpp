class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
//         multiset<int>s;
//         for(auto i:nums){
//             s.insert(i);
//         }
//         
//         nums.clear();
//         for(auto i:s){
//             nums.push_back(i);
//         }
//         int count=1;
//         int ans=1;
//  sort(nums.begin(),nums.end());
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1]+1){
//                 ++count;
               
//             }else{
//                 count=1;
//             }
//              ans=max(ans,count);
            
//         }
//         return ans;
        int n = nums.size();
		if(n == 0) return 0;
		sort(nums.begin(), nums.end());
		int cnt = 1, mx = 1;
		for(int j = 1; j < n; j++) {
			if(nums[j] == nums[j-1])
				continue;
			if(nums[j] == nums[j-1] + 1)
				cnt++;
			else 
				cnt = 1;
			mx = max(mx, cnt);
		}
		return mx;
    }
};