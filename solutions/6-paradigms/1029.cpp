#include <bits/stdc++.h>

using namespace std;

int main() {
    int fib[40] = {0, 1};
    int calls[40] = {0, 0};

    for (int i = 2; i < 40; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
        calls[i] = calls[i - 1] + calls[i - 2] + 2;
    }

    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        cout << "fib(" << x << ") = " << calls[x] << " calls = " << fib[x] << endl;
    }
    return 0;
}
