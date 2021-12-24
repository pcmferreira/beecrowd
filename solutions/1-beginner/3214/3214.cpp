#include <bits/stdc++.h>

using namespace std;

int main() {
    int f, e, c; cin >> f >> e >> c;

    int v = f + e;
    int ans = 0;
    while (v >= c) {
        ans += v / c;
        v = v / c + v % c;
    }
    cout << ans << endl;
    return 0;
}
