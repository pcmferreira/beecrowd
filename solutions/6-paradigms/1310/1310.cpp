#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c;
    while (cin >> n >> c) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            a[i] -= c;
        }
        int s = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            s = max(a[i], s + a[i]);
            ans = max(s, ans);
        }
        cout << ans << endl;
    }
    return 0;
}
