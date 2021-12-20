#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, z, l; cin >> h >> z >> l;
    if ((h < z) + (h < l) == 1) cout << "huguinho\n";
    else if ((z < h) + (z < l) == 1) cout << "zezinho\n";
    else cout << "luisinho\n";
    return 0;
}
