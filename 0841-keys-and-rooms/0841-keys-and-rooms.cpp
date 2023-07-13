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
        int n=rooms.size();
        vector<bool>v(n,false);
        dfs(v,0,rooms);
        for(int i=0;i<n;i++){
            if(!v[i])return false;
        }
        return true;
    }
};