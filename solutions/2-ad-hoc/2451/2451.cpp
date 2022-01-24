#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<string> board(n);
    for (int i = 0; i < n; ++i) cin >> board[i];
    int ans = 0;
    int food = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 'o') {
                    if (++food > ans) ans = food;
                } else if (board[i][j] == 'A') food = 0;
            }
        } else {
            for (int j = n - 1; j >= 0; --j) {
                if (board[i][j] == 'o') {
                    if (++food > ans) ans = food;
                } else if (board[i][j] == 'A') food = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
