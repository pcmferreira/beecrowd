#include <bits/stdc++.h>

using namespace std;

int main() {
    const int maxn = 10000 + 1;
    const int root = 100 + 1;
    bitset<maxn> bs;
    vector<int> av(root);
    for (int i = 0; i < root; ++i) {
        int x = i * i;
        av[i] = x;
        bs[x] = true;
    }

    int n;
    while (cin >> n) {
        bool ans = false;
        for (int i = 0; av[i] <= n; ++i) {
            if (bs[n - av[i]]) { ans = true; break; }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
