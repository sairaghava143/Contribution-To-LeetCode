class NumArray {
public:
    vector<int>s;
    NumArray(vector<int>& nums) {
        s.push_back(0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.push_back(s.back()+nums[i]);
        }
    }
    
    int sumRange(int i, int j) {
        return s[j+1]-s[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */