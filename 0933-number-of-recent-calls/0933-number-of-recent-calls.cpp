#include <queue>

class RecentCounter {
    std::queue<int> requests;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        requests.push(t);
        
        // Remove the requests that are older than 3000 milliseconds
        while (requests.front() < t - 3000) {
            requests.pop();
        }
        
        return requests.size();
    }
};


/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */