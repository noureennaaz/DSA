vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        
        vector<int> ans;
        vector<bool>visited(V, 0);
        int val;
        queue<int> que;


  // for the graph with initial node as 0
        que.push(0);
        
        while(!que.empty())
        {
            val=que.front();
            que.pop();
            visited[val]=1;
            ans.push_back(val);
            
            for(auto i: adj[val])
            {
                if(!visited[i])
                {
                    visited[i]=true;
                    que.push(i);
                }
            }
            
        }
        return ans;
    }
