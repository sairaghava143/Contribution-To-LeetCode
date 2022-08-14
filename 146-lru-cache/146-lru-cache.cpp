class LRUCache {
public:
    list<pair<int,int>>l;
    unordered_map<int,list<pair<int,int>>::iterator>m;
    int cp;
    LRUCache(int capacity) {
        cp=capacity;
    }
    
    int get(int key) {
        if(!m.count(key))return -1;
        l.splice(l.begin(),l,m[key]);
        return m[key]->second;
    }
    
    void put(int key, int value) {
        if(m.count(key)){
            l.splice(l.begin(),l,m[key]);
            m[key]->second=value;
            return;
        }
        if(cp==l.size()){
            auto b=l.back().first;
            l.pop_back();
            m.erase(b);
        }
        l.push_front({key,value});
        m[key]=l.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */