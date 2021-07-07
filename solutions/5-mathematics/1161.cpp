#include <bits/stdc++.h>

using namespace std;
 
int main() {
    uint64_t fat[21] = {1};
    for (int i = 1; i <= 20; ++i) {
        fat[i] = fat[i - 1] * i;
    }

    int m, n;
    while (cin >> m >> n) {
        cout << fat[m] + fat[n] << endl;
    }
    return 0;
}
