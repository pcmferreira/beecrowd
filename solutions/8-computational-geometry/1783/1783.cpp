#include <bits/stdc++.h>

using namespace std;

typedef pair<double, double> PDD;
const double INF = DBL_MAX;

PDD r(PDD p1, PDD p2) {
    double x1 = p1.first, y1 = p1.second;
    double x2 = p2.first, y2 = p2.second;

    double dx = x2 - x1;
    double dy = y2 - y1;

    double x = (x1 + x2) / 2;
    double y = (y1 + y2) / 2;

    if (dy == 0) return make_pair(INF, x);

    double a = -dx / dy;
    double b = y - a * x;

    return make_pair(a, b);
}

PDD c(PDD r1, PDD r2) {
    double a1 = r1.first, b1 = r1.second;
    double a2 = r2.first, b2 = r2.second;

    double x, y;
    if (a1 == INF) {
        x = b1;
        y = a2 * x + b2;
    } else if (a2 == INF) {
        x = b2;
        y = a1 * x + b1;
    } else {
        x = (b2 - b1) / (a1 - a2);
        y = a1 * x + b1;
    }
    return make_pair(x, y);
}

int main() {
    cout << fixed << setprecision(2);

    int t; cin >> t;
    for (int i = 1; i <= t; ++i) {
        PDD p[4];
        for (int j = 0; j < 4; ++j) {
            cin >> p[j].first >> p[j].second;
        }
        PDD r1 = r(p[0], p[2]);
        PDD r2 = r(p[1], p[3]);
        PDD ans = c(r1, r2);
        double x = ans.first, y = ans.second;
        cout << "Caso #" << i << ": " << x << " " << y << endl;
    }
    return 0;
}
