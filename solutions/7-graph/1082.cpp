#include <bits/stdc++.h>

using namespace std;

vector<int> g[26];
bitset<26> bs;
vector<int> cc;

void dfs(int r) {
    bs[r] = true;
    cc.push_back(r);
    for (int x : g[r]) {
        if (!bs[x]) dfs(x);
    }
}

int main() {
    int n; cin >> n;
    for (int t = 1; t <= n; ++t) {
        int v, e;
        cin >> v >> e;

        for (vector<int>& v : g) {
            v.clear();
        }

        for (int i = 0; i < e; ++i) {
            char a, b;
            cin >> a >> b;
            a -= 'a'; b -= 'a';

            g[a].push_back(b);
            g[b].push_back(a);
        }

        cout << "Case #" << t << ":\n";

        bs.reset();
        int cnt = 0;

        for (int i = 0; i < v; ++i) {
            if (!bs[i]) {
                ++cnt;
                cc.clear();
                dfs(i);
                sort(cc.begin(), cc.end());
                for (int x : cc) {
                    cout << (char) (x + 'a') << ",";
                }
                cout << endl;
            }
        }
        cout << cnt << " connected components\n\n";
    }
    return 0;
}
