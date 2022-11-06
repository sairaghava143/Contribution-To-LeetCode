class MyHashMap {
public:
    vector<vector<int>>v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        bool check=false;
       for(auto &it:v){
            if(it[0]==key){it[1]=value; check=true; break;} 
        }
        if(!check)v.push_back({key,value});
    }
    
    int get(int key) {
        for(auto &it:v){
            if(it[0]==key)return it[1];
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto &it:v){
            if(it[0]==key)it[0]=-1;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */