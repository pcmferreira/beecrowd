#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b) {
    if (a.first[0] != b.first[0]) return a.first[0] < b.first[0];
    return a.second < b.second;
}

int main() {
    int n; cin >> n;
    vector<pair<string, int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; ++i) {
        cout << v[i].first << endl;
    }
    return 0;
}
