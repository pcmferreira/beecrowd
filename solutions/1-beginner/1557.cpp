#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n;
    while ((cin >> n) && n) {
        int grt = (int) pow(4, n - 1);
        int width = to_string(grt).size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int x = (int) pow(2, i + j);
                cout << setw(width) << x << " \n"[j == n - 1];
            }
        }
        cout << endl;
    }
    return 0;
}
