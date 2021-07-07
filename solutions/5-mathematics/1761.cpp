#include <bits/stdc++.h>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    const double pi = 3.141592654;

    double a, b, c;
    while (cin >> a >> b >> c) {
        a = a / 180 * pi;
        double x = (tan(a) * b + c) * 5;
        cout << x << endl;
    }
    return 0;
}
