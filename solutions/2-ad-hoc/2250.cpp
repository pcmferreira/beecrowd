#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main() {
    int n;
    for (int t = 1; (cin >> n) && n; ++t) {
        vector<pair<string, int>> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].first;
            int lo = 1000;
            int hi = 0;
            int sum = 0;
            for (int j = 0; j < 12; ++j) {
                int x;
                cin >> x;
                sum += x;
                lo = min(lo, x);
                hi = max(hi, x);
            }
            v[i].second = sum - (lo + hi);
        }
        sort(v.begin(), v.end(), comp);
        cout << "Teste " << t << endl;
        int pos = 1;
        for (int i = 0; i < n; ++i) {
            if (i != 0 && v[i].second != v[i - 1].second) pos = i + 1;
            cout << pos << " " << v[i].second << " " << v[i].first << endl;
        }
        cout << endl;
    }
    return 0;
}
