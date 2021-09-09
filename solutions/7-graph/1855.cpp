#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    string m[100];
    bitset<100> b[100];
    for (int i = 0; i < y; ++i) {
        cin >> m[i];
        b[i].reset();
    }

    bool ans = false;

    int i = 0, j = 0;
    char d = m[i][j];
    while (true) {
        if (i < 0 || j < 0 || i >= y || j >= x) break;

        if (m[i][j] == '*') {
            ans = true; break;
        } else if (m[i][j] != '.') {
            if (b[i][j]) break;
            b[i][j] = true;
            d = m[i][j];
        }

        if (d == '^') --i;
        if (d == '>') ++j;
        if (d == 'v') ++i;
        if (d == '<') --j;
    }

    cout << "!*"[ans] << endl;

    return 0;
}
