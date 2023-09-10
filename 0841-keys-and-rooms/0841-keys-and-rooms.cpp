class Solution {
public:
    void dfs(vector<int>&v,int i,vector<vector<int>>& rooms){
        v[i]=1;
        
        for(auto &it:rooms[i]){
            if(!v[it]){
                v[it]=1;
                dfs(v,it,rooms); 
            }
           
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       int n=rooms.size();
        vector<int>v(n,0);
        
        
                dfs(v,0,rooms);
        
        for(int i=0;i<n;i++){
            if(v[i]==0)return false;
        }
        return true;
    
        
    }
};