#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b; cin >> a >> b;
    double x = a + b + (a * b) / 100.0;
    cout << fixed << setprecision(6) << x << endl;
    return 0;
}
