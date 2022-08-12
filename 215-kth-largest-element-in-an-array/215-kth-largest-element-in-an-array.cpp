class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // priority_queue<int,vector<int>,greater<int>>q;
        // for(int i=0;i<k;i++){
        //     q.push(nums[i]);
        // }
        // for(int i=k;i<nums.size();i++){
        //     int x=q.top();
        //     if(nums[i]>x){
        //         q.pop();
        //         q.push(nums[i]);
        //     }
        // }
        // return q.top();
    //     priority_queue<int>q;
    //     for(int i=0;i<nums.size();i++){
    //         q.push(nums[i]);
    //     }
    // for(int i=0;i<k-1;i++){
    //     q.pop();
    // }
    //     return q.top();
//          priority_queue<int,vector<int>,greater<int>>q;
//         for(int i=0;i<nums.size();i++){
//             q.push(nums[i]);
//         }
//     for(int i=0;i<nums.size()-k;i++){
//         q.pop();
//     }
//         return q.top();
       ///nth element stl
        // nth_element(nums.begin(),nums.begin()+k-1,nums.end(),greater<int>());
        // return nums[k-1];
        
        //parial sort
        // partial_sort(nums.begin(),nums.begin()+k,nums.end(),greater<int>());
        // return nums[k-1];
        // multiset<int> mset;
        // for (int num : nums) {
        //     mset.insert(num);
        //     if (mset.size() > k) {
        //         mset.erase(mset.begin());
        //     }
        // }
        // return *mset.begin();
        buildMaxHeap(nums);
        for (int i = 0; i < k - 1; i++) {
            swap(nums[0], nums[--heapSize]);
            maxHeapify(nums, 0);
        }
        return nums[0];
    }
private:
    int heapSize;
    
    int left(int i) {
        return (i << 1) + 1;
    }
    
    int right(int i) {
        return (i << 1) + 2;
    }
    
    void maxHeapify(vector<int>& nums, int i) {
        int largest = i, l = left(i), r = right(i);
        if (l < heapSize && nums[l] > nums[largest]) {
            largest = l;
        }
        if (r < heapSize && nums[r] > nums[largest]) {
            largest = r;
        }
        if (largest != i) {
            swap(nums[i], nums[largest]);
            maxHeapify(nums, largest);
        }
    }
    
    void buildMaxHeap(vector<int>& nums) {
        heapSize = nums.size();
        for (int i = (heapSize >> 1) - 1; i >= 0; i--) {
            maxHeapify(nums, i);
        }

    }
};