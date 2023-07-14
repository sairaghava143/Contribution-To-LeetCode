class Solution {
public:
    void dfs(string u,string v,double &val,bool &found,map<string,int>&vis,map<string,double>&mp,map<string,vector<string>>&graph){
        vis[u]=1;
        if(found){
            return;
        }
        
        for(auto it:graph[u]){
            if(vis[it]!=1){
                val*=mp[u+"->"+it];
               if(v==it){
                   found=true;
                    return ;
                }
                
                
                dfs(it,v,val,found,vis,mp,graph);
               if(found){
                   return;
               }else{
                   val/=mp[u+"->"+it];
               }
            }
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        //practice dfs approach
        map<string,vector<string>>graph;
        map<string,double>mp;
        vector<double>ans;
        
        for(int i=0;i<equations.size();i++){
        string u=equations[i][0];
        string v=equations[i][1];
            mp[u+"->"+v]=values[i];
            mp[v+"->"+u]=1/values[i];
            graph[u].push_back(v);
            graph[v].push_back(u);



        }
        
        for(int i=0;i<queries.size();i++){
            string u=queries[i][0];
            string v=queries[i][1];
            
            if(graph.find(u)==graph.end()||graph.find(v)==graph.end()){
                ans.push_back(-1.0);
            }else{
                double val=1;
                bool found=false;
                map<string,int>vis;
                
                if(u==v){
                    found=true;
                }else{
                    dfs(u,v,val,found,vis,mp,graph);
                }
                if(found){
                    ans.push_back(val);
                }else{
                    ans.push_back(-1);
                }
            }

        }
        return ans;
    }
};