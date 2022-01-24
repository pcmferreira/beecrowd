#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> av(n);
    for (int i = 0; i < n; ++i) {
        cin >> av[i];
    }
    sort(av.begin(), av.end());
    reverse(av.begin(), av.end());
    int ans = k;
    for (int i = k; i < n; ++i) {
        if (av[i] != av[i - 1]) break;
        ++ans;
    }
    cout << ans << endl;
    return 0;
}
