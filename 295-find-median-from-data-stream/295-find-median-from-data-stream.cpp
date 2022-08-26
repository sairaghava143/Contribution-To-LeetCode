class MedianFinder {
public:
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int maxsize=maxheap.size();
        int minsize=minheap.size();
        if(maxsize==0){
            maxheap.push(num);
        }else if(maxsize==minsize){
            if(num<minheap.top()){
                maxheap.push(num);
            }else{
                int temp=minheap.top();
                minheap.pop();
                minheap.push(num);
                maxheap.push(temp);
            }
        }else{
            if(minsize==0){
                if(num>maxheap.top()){
                minheap.push(num);
                }else{
                    int temp=maxheap.top();
                        maxheap.pop();
                        minheap.push(temp);
                        maxheap.push(num);
                }
                
            }
                
                
                
                else if(num>=minheap.top()){
                    minheap.push(num);
                }else{
                    if(num<maxheap.top()){
                        int temp=maxheap.top();
                        maxheap.pop();
                        minheap.push(temp);
                        maxheap.push(num);
                    }else{
                        minheap.push(num);
                    }
                }
            }
        }
    
    
    double findMedian() {
        int maxsize=maxheap.size();
        int minsize=minheap.size();
        if(maxsize>minsize)return maxheap.top();
        return (minheap.top()+maxheap.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */