void dfs(int node,int vis[], vector<int> adj[]){
    vis[node] = 1;

    for(auto it: adj[node]){
        if(vis[it]!=1){
            dfs(it, vis, adj);
        }
    }
}

int findNumOfProvinces(vector<vector<int>>& roads, int n) {
    vector<int> adj[n];

    for(int i= 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(roads[i][j]==1&&i!=j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    int count = 0;
    int vis[n] = {0};

    for(int i = 0; i<n; i++){
        if(vis[i]!=1){
            count++;
            dfs(i,vis, adj);
        }
    }
    return count;
}
