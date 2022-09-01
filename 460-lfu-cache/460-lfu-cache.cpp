class LFUCache {
public:
    unordered_map<int,list<pair<int,int>>>lst_map;
    unordered_map<int,list<pair<int,int>>::iterator>key_map;
    unordered_map<int,int>frequency_map;
    int cap=0,size=0,min_frequency=0;
    LFUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if(!key_map.count(key)){
            return -1;
        }else{
            auto temp=key_map[key]->second;
            put(key,temp);
            return temp;
        }
    }
    
 void put(int key, int value) 
    {
        
        auto found = key_map.find(key);
        if(found== key_map.end()) 
        {   if(cap!=0)
            {  
            if(size>=cap)
            {                                                    
               auto temp = lst_map[min_frequency].back();        
               lst_map[min_frequency].pop_back();                
               key_map.erase(temp.first);                       
               frequency_map.erase(temp.first);                 
                                                                
            }
            else
                size++;
            lst_map[1].emplace_front(make_pair(key,value));      
            min_frequency=1;
            key_map[key]= lst_map[1].begin();                   
            frequency_map[key]=1;
            
        }
        }
        else
        {
            auto frequency = frequency_map[key];
            lst_map[frequency].erase(found->second);             
            if(lst_map[frequency].size()==0)                    
            {
                if(min_frequency ==frequency)
                    min_frequency++;
            }
            lst_map[++frequency].emplace_front(key,value);       
            key_map[key]=lst_map[frequency].begin();            
            frequency_map[key]=frequency; 
            
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */