#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, p; cin >> n >> m >> p;
    vector<string> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
        for (char& c : x[i]) c = tolower(c);
    }
    vector<string> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        for (char& c : b[i]) c = tolower(c);
    }

    string diag_main;
    for (int i = 0; i < min(m, p); ++i) {
        diag_main += b[i][i];
    }

    vector<string> diag_above;
    for (int i = 1; i < p; ++i) {
        string d;
        for (int j = 0; j < m && i + j < p; ++j) {
            d += b[j][i + j];
        }
        diag_above.push_back(d);
    }

    vector<string> diag_below;
    for (int i = 1; i < m; ++i) {
        string d;
        for (int j = 0; i + j < m && j < p; ++j) {
            d += b[i + j][j];
        }
        diag_below.push_back(d);
    }

    for (string s : x) {
        string r(s);
        reverse(r.begin(), r.end());

        if (diag_main.find(s) != -1 || diag_main.find(r) != -1) {
            cout << "1 Palavra \"" << s << "\" na diagonal principal\n";
            continue;
        }
        bool fnd = false;
        for (string d : diag_above) {
            if (d.find(s) != -1 || d.find(r) != -1) {
                cout << "2 Palavra \"" << s << "\" acima da diagonal principal\n";
                fnd = true;
                break;
            }
        }
        if (fnd) continue;
        for (string d : diag_below) {
            if (d.find(s) != -1 || d.find(r) != -1) {
                cout << "3 Palavra \"" << s << "\" abaixo da diagonal principal\n";
                fnd = true;
                break;
            }
        }
        if (fnd) continue;
        cout << "4 Palavra \"" << s << "\" inexistente\n";
    }
    return 0;
}
