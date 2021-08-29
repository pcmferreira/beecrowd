#include <bits/stdc++.h>

using namespace std;

vector<int> g[20];
bool c[20];

void dfs(int u, int depth) {
    c[u] = true;
    for (int e : g[u]) {
        for (int i = 0; i < depth; ++i) cout << "  ";
        cout << u << "-" << e;
        if (!c[e]) {
            cout << " pathR(G," << e << ")\n";
            dfs(e, depth + 1);
        } else cout << endl;
    }
}

int main() {
    int n; cin >> n;
    for (int t = 1; t <= n; ++t) {
        cout << "Caso " << t << ":\n";
        int v, e; cin >> v >> e;
        for (int i = 0; i < 20; ++i) {
            g[i].clear();
            c[i] = false;
        }
        for (int i = 0; i < e; ++i) {
            int a, b;
            cin >> a >> b;
            g[a].push_back(b);
        }
        for (int i = 0; i < v; ++i) {
            sort(g[i].begin(), g[i].end());
        }
        for (int i = 0; i < v; ++i) {
            if (!c[i] && g[i].size() > 0) {
                dfs(i, 1);
                cout << endl;
            }
        }
    }
    return 0;
}
