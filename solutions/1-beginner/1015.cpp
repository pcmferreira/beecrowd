#include <bits/stdc++.h>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dx = x1 - x2;
    double dy = y1 - y2;
    double ans = sqrt(dx * dx + dy * dy);
    cout << fixed << setprecision(4) << ans << endl;
    return 0;
}
