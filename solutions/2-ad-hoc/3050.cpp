#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> av(n);
    vector<int> lv(n);
    vector<int> rv(n);
    for (int i = 0; i < n; ++i) {
        cin >> av[i];
        lv[i] = n - i + av[i];
        rv[i] = i + 1 + av[i];
    }

    int lp = max_element(lv.begin(), lv.end()) - lv.begin();
    int rp = max_element(rv.begin(), rv.end()) - rv.begin();

    cout << abs(rp - lp) + av[rp] + av[lp] << endl;
    return 0;
}
