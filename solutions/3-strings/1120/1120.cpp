#include <bits/stdc++.h>

using namespace std;

int main() {
    char d;
    string n;
    while ((cin >> d >> n) && d != '0') {
        string ans;
        for (char c : n) {
            if (c != d && (c != '0' || ans.size())) ans.push_back(c);
        }
        if (ans.size() == 0) ans.push_back('0');
        cout << ans << endl;
    }
    return 0;
}
