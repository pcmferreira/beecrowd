#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    bool ans = false;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i - 1] == '1' && s[i] == '3') {
            ans = true;
            break;
        }
    }
    cout << s << (ans ? "" : " NO") << " es de Mala Suerte\n";
    return 0;
}
