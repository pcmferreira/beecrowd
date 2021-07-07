#include <bits/stdc++.h>

using namespace std;

int main() {
    string kb = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char x[128];
    x[32] = 32;
    for (int i = 1; i < kb.size(); ++i) {
        x[kb[i]] = kb[i - 1];
    }
    
    string s;
    while (getline(cin, s)) {
        for (char& c : s) {
            c = x[c];
        }
        cout << s << endl;
    }
    return 0;
}
