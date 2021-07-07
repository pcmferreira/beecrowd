#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n;
    while ((cin >> b >> n) && n) {
        vector<int> x(b);
        for (int i = 0; i < b; ++i) {
            cin >> x[i];
        }
        for (int i = 0; i < n; ++i) {
            int d, c, v;
            cin >> d >> c >> v;
            x[d - 1] -= v;
            x[c - 1] += v;
        }
        bool ans = true;
        for (int i = 0; i < b; ++i) {
            if (x[i] < 0) ans = false;
        }
        cout << "NS"[ans] << endl;
    }
    return 0;
}
