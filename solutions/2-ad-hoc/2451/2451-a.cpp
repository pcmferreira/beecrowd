#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<string> board(n);
    for (int i = 0; i < n; ++i) cin >> board[i];
    int ans = 0;
    int score = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 'o') {
                    if (++score > ans) ans = score;
                } else if (board[i][j] == 'A') score = 0;
            }
        } else {
            for (int j = n - 1; j >= 0; --j) {
                if (board[i][j] == 'o') {
                    if (++score > ans) ans = score;
                } else if (board[i][j] == 'A') score = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
