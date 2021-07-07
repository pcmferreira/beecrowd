#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, c;
        cin >> m >> c;
        vector<vector<int>> av(m);
        while (c--) {
            int x; cin >> x;
            av[x % m].push_back(x);
        }
        for (int i = 0; i < m; ++i) {
            cout << i << " -> ";
            for (int x : av[i]) {
                cout << x << " -> ";
            }
            cout << "\\\n";
        }
        if (t) cout << endl;
    }
    return 0;
}
