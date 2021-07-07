#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    for (int t = 1; (cin >> n) && n; ++t) {
        cout << "Teste " << t << endl;
        cout << (int) pow(2, n) - 1 << "\n\n";
    }
    return 0;
}
