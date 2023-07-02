void dfs(vector<int> adj[],int present, vector<bool>&visited, vector<int>& ans )
    {
        visited[present]=1;
        ans.push_back(present);
        
        for(auto i: adj[present])
        {
            if(!visited[i])
            {
                dfs(adj, i, visited, ans);
            }
        }
    }


    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int > ans;
        vector<bool> visited (V, 0);
        dfs( adj , 0, visited  ,ans);
        
        return ans;
    }
