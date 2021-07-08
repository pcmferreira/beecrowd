#include <bits/stdc++.h>

using namespace std;

const int maxn = 100; 
vector<int> g[maxn];
bitset<maxn> visited;

void dfs(int u) {
    if (visited[u]) return;
    visited[u] = true;
    for (int v : g[u]) {
        dfs(v);
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
    dfs(0);
    cout << (visited.count() == n ? "COMPLETO" : "INCOMPLETO") << endl;
    return 0;
}
