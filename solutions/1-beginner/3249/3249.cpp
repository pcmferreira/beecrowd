#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0;
    while (n--) {
        string k; cin >> k;
        ans += k.find("CD") == string::npos;
    }
    cout << ans << endl;
    return 0;
}
