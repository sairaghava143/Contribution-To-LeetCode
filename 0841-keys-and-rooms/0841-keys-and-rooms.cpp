class Solution {
public:
    void dfs(vector<bool>&v,int s,vector<vector<int>>&rooms){
        v[s]=true;
        for(int i=0;i<rooms[s].size();i++){
            if(!v[rooms[s][i]]){
                dfs(v,rooms[s][i],rooms);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        //practice dfs approach
        // int n=rooms.size();
        // vector<bool>v(n,false);
        // dfs(v,0,rooms);
        // for(int i=0;i<n;i++){
        //     if(!v[i])return false;
        // }
        // return true;
        
        
        //dfs using stack
        
        queue<int>dfs;
        dfs.push(0);
        unordered_set<int>s={0};
        while(!dfs.empty()){
            int i=dfs.front();
            dfs.pop();
            for(int j:rooms[i]){
                if(s.count(j)==0){
                    dfs.push(j);
                    s.insert(j);
                                    if(s.size()==rooms.size())return true;

                    }
            }
        }
        return s.size()==rooms.size();
    }
};