int n;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> tin, low;
int timer;

void dfs(int v, int p=-1) {
  vis[v] = true;
  tin[v] = low[v] = timer++;
  for (int to: adj[v]) {
    if (to == p) 
      continue;
    if (vis[to]) {
      low[v] = min(low[v], tin[to]);
    } else {
      dfs(to, v);
      low[v] = min(low[v], low[to]);
      if (low[to] > tin[v]) {
        IS_BRIDGE(v, to);
      }
    }
  }
}


void find_bridges() {
    timer = 0;
    vis.assign(n, false);
    tin.assign(n, -1);
    low.assign(n, -1);
    for (int i = 0; i < n; ++i) {
        if (!vis[i])
            dfs(i);
    }
}

