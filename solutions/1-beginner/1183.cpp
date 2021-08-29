#include <bits/stdc++.h>

using namespace std;

int main() {
    const int n = 12;
    char o; cin >> o;
    double sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            double x; cin >> x;
            if (j > i) {
                sum += x;
                ++cnt;
            }
        }
    }
    if (o == 'M') sum /= cnt;
    cout << fixed << setprecision(1) << sum << endl;
    return 0;
}
