#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    int x = N * N;
    cout << (x / 2 + x % 2) << " casas brancas e " << (x / 2) << " casas pretas\n";
    return 0;
}
