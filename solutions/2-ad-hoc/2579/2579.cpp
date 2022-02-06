#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, c, x, y;
    cin >> l >> c >> x >> y;
    cout << (((x * c + y) & 1) ? "Esquerda" : "Direita") << endl;
    return 0;
}
