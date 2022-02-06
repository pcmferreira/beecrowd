#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<string> va(n);
    vector<string> vb(m);
    for (int i = 0; i < n; ++i) {
        cin >> va[i];
        for (char& c : va[i]) c = tolower(c);
    }
    for (int i = 0; i < m; ++i) {
        cin >> vb[i];
        for (char& c : vb[i]) c = tolower(c);
    }
    for (string a : va) {
        string r(a);
        reverse(r.begin(), r.end());
        bool fnd = false;
        for (string b : vb) {
            if ((b.find(a) != string::npos) || (b.find(r) != string::npos)) {
                fnd = true;
                break;
            }
        }
        cout << "Sheldon " << (fnd ? "come" : "detesta") << " a fruta " << a << endl;
    }
    return 0;
}
