#include <bits/stdc++.h>

using namespace std;

int main() {
    int fat[5] = {1, 2, 6, 24, 120};

    int n;
    while ((cin >> n) && n) {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        int ans = 0;
        for (int i = 0; i < s.size(); ++i) {
            ans += (s[i] - '0') * fat[i];
        }
        cout << ans << endl;
    }
    return 0;
}
