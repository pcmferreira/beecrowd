#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        int m; cin >> m;
        vector<int> a;
        for (int i = 0; i < m; ++i) {
            int x; cin >> x;
            if (x & 1) a.push_back(x);
        }
        sort(a.begin(), a.end());
        int l = a.size();
        for (int i = 0; i < l; ++i) {
            if (i != 0) cout << " ";
            cout << ((i & 1) ? a[i >> 1] : a[l - (i >> 1) - 1]);
        }
        cout << endl;
    }
    return 0;
}
