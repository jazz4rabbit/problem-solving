#include <stdio.h>
#include <vector>
using namespace std;

#define NMAX 10

int tt, n, m, u, v, visited[NMAX];
vector<int> adj[NMAX];

int dfs(int u)
{
    int ret = 0;
    if (u == n - 1) return 1;
    if (visited[u]) return dfs(u + 1);

    visited[u] = 1;
    for (auto&& v : adj[u]) {
        if (visited[v]) continue;
        visited[v] = 1;
        ret += dfs(u + 1);
        visited[v] = 0;
    }
    visited[u] = 0;
    return ret;
}

int main(void)
{
    scanf("%d", &tt);
    for (int tc = 1; tc <= tt; ++tc) {
        scanf("%d %d", &n, &m);
        for (int i = 0; i < m; ++i) {
            scanf("%d %d", &u, &v);
            if (u > v) swap(u, v);
            adj[u].push_back(v);
        }
        printf("%d\n", dfs(0));
        
        for (int i = 0; i < n; ++i) adj[i].clear();
    }

    return 0;
}
