class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(std::next_permutation(nums.begin(),nums.end())) return;
        std::sort(nums.begin(),nums.end());
    }
};
