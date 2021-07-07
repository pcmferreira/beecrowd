#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int ti = 1; ti <= t; ++ti) {
        cout << "Caso #" << ti << ":\n";
        string s;
        cin >> s;
        vector<int> v[2];
        int d[2] = {0,0};
        for (int i = 0; i < s.size(); ++i) {
            bool vogal = s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u';
            v[!vogal].push_back(i);
        }
        int n[2] = {(int)v[0].size(), (int)v[1].size()};
        int q;
        cin >> q;
        while (q--) {
            int op;
            cin >> op;
            if (op == 2) {
                string r = s;
                for (int x = 0; x < 2; ++x) {
                    if (n[x]) {
                        d[x] %= n[x];
                        if (d[x]) {
                            for (int i = 0; i < n[x]; ++i) {
                                r[v[x][(i + d[x]) % n[x]]] = s[v[x][i]];
                            }
                        }
                    }
                }
                cout << r << endl;
            } else {
                int x;
                cin >> x;
                d[op] += x;
            }
        }
    }
    return 0;
}
