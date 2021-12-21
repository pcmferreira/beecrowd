#include <bits/stdc++.h>

using namespace std;

int main() {
    const int WHITE = 0;
    const int BLACK = 1;

    const int MAXN = 100;
    int a[MAXN][MAXN];

    int N; cin >> N;
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i + j == 0) a[i][j] = WHITE;
            else if (i == 0) a[i][j] = !a[i][j - 1];
            else if (j == 0) a[i][j] = !a[i - 1][j];
            else a[i][j] = a[i - 1][j - 1];
        }
    }

    int ans[] = {0, 0};

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            ++ans[a[i][j]];
        }
    }

    cout << ans[WHITE] << " casas brancas e " << ans[BLACK] << " casas pretas\n";
    return 0;
}
