#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string board;
    for (int i = 0; i < n; ++i) {
        string line; cin >> line;
        if (i & 1) reverse(line.begin(), line.end());
        board += line;
    }
    int ans = 0, score = 0;
    for (char c : board) {
        if (c == 'o' && ++score > ans) ans = score;
        else if (c == 'A') score = 0;
    }
    cout << ans << endl;
    return 0;
}
