class SmallestInfiniteSet {
public:
    //heap approach
    priority_queue<int,vector<int>,greater<int>>pq;
    unordered_set<int>s;
    int currentinteger;
    SmallestInfiniteSet() {
        currentinteger=1;
    }
    
    int popSmallest() {
        int ans;
        if(!pq.empty()){
            ans=pq.top();
            pq.pop();
            s.erase(ans);
        }else{
            ans=currentinteger;
            currentinteger++;
        }
        return ans;
    }
    
    void addBack(int num) {
        if(currentinteger<=num || s.find(num)!=s.end())return;
        s.insert(num);
        pq.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */