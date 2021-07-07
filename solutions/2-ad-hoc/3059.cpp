#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, r;
    int av[1000];
    cin >> n >> l >> r;
    for (int i = 0; i < n; ++i) {
        cin >> av[i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int x = av[i] + av[j];
            if (x >= l && x <= r)
                ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
