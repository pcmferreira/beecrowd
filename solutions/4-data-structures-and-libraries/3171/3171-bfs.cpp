#include <bits/stdc++.h>

using namespace std;

const int maxn = 100; 
vector<int> g[maxn];
bitset<maxn> visited;

void bfs(int root) {
    queue<int> q({ root });
    visited[root] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : g[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    int n, l;
    cin >> n >> l;
    for (int i = 0; i < l; ++i) {
        int x, y;
        cin >> x >> y;
        --x; --y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(0);
    cout << (visited.count() == n ? "COMPLETO" : "INCOMPLETO") << endl;
    return 0;
}
