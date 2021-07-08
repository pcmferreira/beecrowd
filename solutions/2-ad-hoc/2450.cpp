#include <bits/stdc++.h>

using namespace std;

int main() {
    const int maxn = 500;
    bool a[maxn][maxn];

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;
            a[i][j] = x != 0;
        }
    }
    int f[maxn];
    for (int i = 0; i < n; ++i) {
        f[i] = m;
        for (int j = 0; j < m; ++j) {
            if (a[i][j]) {
                f[i] = j;
                break;
            }
        }
    }
    bool ans = true;
    for (int i = 1; i < n; ++i) {
        if (f[i] != m && f[i] <= f[i - 1]) {
            ans = false;
            break;
        }
    }
    cout << "NS"[ans] << endl;
    return 0;
}
