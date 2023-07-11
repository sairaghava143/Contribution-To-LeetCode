class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int>rad,dir;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                rad.push(i);
                    
            }else{
                dir.push(i);
            }
        }
        
        
        while(!rad.empty() && !dir.empty()){
            if(rad.front()<dir.front()){
                rad.push(rad.front()+s.size());
            }else{
                dir.push(dir.front()+s.size());
            }
            
            rad.pop();
            dir.pop();
        }
        return rad.empty()==true?"Dire":"Radiant";    
    }
};