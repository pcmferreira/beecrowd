#include <bits/stdc++.h>

using namespace std;

int main() {
    const int maxn = 101;
    int g, p;
    int score[maxn];
    int race[maxn][maxn];
    int val[maxn];
    while ((cin >> g >> p) && g) {
        for (int i = 0; i < g; ++i) {
            for (int j = 0; j < p; ++j) {
                int x;
                cin >> x;
                race[i][x - 1] = j;
            }
        }
        int s;
        cin >> s;
        while (s--) {
            int k;
            cin >> k;
            for (int i = 0; i < k; ++i) {
                cin >> val[i];
            }
            fill(score, score + p, 0);
            for (int i = 0; i < g; ++i) {
                for (int j = 0; j < k; ++j) {
                    score[race[i][j]] += val[j];
                }
            }
            int hi = 0;
            for (int i = 0; i < p; ++i) {
                hi = max(hi, score[i]);
            }
            vector<int> ans;
            for (int i = 0; i < p; ++i) {
                if (score[i] == hi) ans.push_back(i + 1);
            }
            for (int i = 0; i < ans.size(); ++i) {
                cout << ans[i] << " \n"[i == ans.size() - 1];
            }
        }
    }
    
    return 0;
}
