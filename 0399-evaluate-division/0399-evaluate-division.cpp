class Solution
{
public:
    void dfs(const string &start, const string &end, double &val, bool &found, map<string, int> &visited, map<string, double> &mp, map<string, vector<string>> &graph)
    {
        visited[start] = 1;
        if (found)
        {
            return;
        }

        for (const auto &it : graph[start])
        {
            if (visited[it] != 1)
            {
                val *= mp[start + "->" + it];
                if (end == it)
                {
                    found = true;
                    return;
                }
                dfs(it, end, val, found, visited, mp, graph);

                if (found)
                {
                    return;
                }
                else
                {
                    val /= mp[start + "->" + it];
                }
            }
        }

     
    }
    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        map<string, double> mp;
        map < string, vector<string> >graph;
        vector<double> ans;
        for (int i = 0; i < equations.size(); i++)
        {
            string u = equations[i][0];
            string v = equations[i][1];

            mp[u + "->" + v] = values[i];
            mp[v + "->" + u] = 1 / values[i];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        for (int i = 0; i < queries.size(); i++)
        {
           

            string start = queries[i][0];
            string end = queries[i][1];

            if (graph.find(start) == graph.end() || graph.find(end) == graph.end())
            {
                ans.push_back(-1.0);
            }
            else
            {
                double val = 1;
                bool found = false;
                map<string, int> visited;
                if (start == end)
                {
                    found = true;
                }
                else
                {
                    dfs(start, end, val, found, visited, mp, graph);
                }

                if (found)
                {
                    ans.push_back(val);
                }
                else
                {
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};