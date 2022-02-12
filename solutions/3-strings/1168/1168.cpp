#include <bits/stdc++.h>

using namespace std;

int main() {
    int l[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n; cin >> n;
    while (n--) {
        string v; cin >> v;
        int ans = 0;
        for (char c : v) {
            ans += l[c - '0'];
        }
        cout << ans << " leds\n";
    }
    return 0;
}
