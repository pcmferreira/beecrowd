#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n;
    while (cin >> n) {
        int mid = n >> 1;
        int inbgn = n / 3;
        int inend = n - inbgn - 1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int x;
                if (i == mid && j == mid) x = 4;
                else if (i >= inbgn && i <= inend && j >= inbgn && j <= inend) x = 1;
                else if (i == j) x = 2;
                else if (i == n - j - 1) x = 3;
                else x = 0;
                cout << x;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
