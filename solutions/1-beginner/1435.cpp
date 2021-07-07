#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n;
    while ((cin >> n) && n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int x = min({ i, j, n - i - 1, n - j - 1 }) + 1;
                cout << setw(3) << x << " \n"[j == n - 1];
            }
        }
        cout << endl;
    }
    return 0;
}
