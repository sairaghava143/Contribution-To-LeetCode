class NumArray {
public:
    vector<int>s;
    NumArray(vector<int>& nums) {
        s=nums;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        while(left<=right){
            sum+=s[left++];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */