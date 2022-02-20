#include <bits/stdc++.h>

using namespace std;

int main() {
    int r1, x1, y1, r2, x2, y2;
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        double dx = x1 - x2;
        double dy = y1 - y2;
        double d = sqrt(dx * dx + dy * dy);
        cout << (d + r2 <= r1 ? "RICO\n" : "MORTO\n");
    }
    return 0;
}
