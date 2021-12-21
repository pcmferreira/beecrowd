#include <bits/stdc++.h>

using namespace std;

int main() {
    string N; cin >> N;
    cout << N << (N.find("13") != string::npos ? "" : " NO") << " es de Mala Suerte\n";
    return 0;
}
