#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s[0] == 'P') cout << "skipped\n";
        else {
            int fnd = s.find('+');
            int x = stoi(s.substr(0, fnd)) + stoi(s.substr(fnd + 1));
            cout << x << endl;
        }
    }
    return 0;
}
