#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while ((cin >> n) && n) {
        int mid = n >> 1;
        int xi, xj;
        xi = xj = mid;
        for (int cnt = 0; cnt < n * n; ++cnt) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cout << (xi == i && xj == j ? 'X' : 'O');
                }
                cout << endl;
            }
            cout << "@\n";

            if (xi == mid && xj == mid) ++xj;
            else if (xi + xj >= n && xi < xj) --xi;
            else if (xj > xi && xi + xj < n) --xj;
            else if (xi >= xj && xi + xj < n - 1) ++xi;
            else ++xj;
        }
    }
    return 0;
}
