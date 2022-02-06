#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, m; scanf("%d%d", &n, &m);

    char va[100][101];
    char vb[500][101];

    for (int i = 0; i < n; ++i) {
        scanf("%s", va[i]);
        for (int j = 0; va[i][j]; ++j) {
            va[i][j] = tolower(va[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        scanf("%s", vb[i]);
        for (int j = 0; vb[i][j]; ++j) {
            vb[i][j] = tolower(vb[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        int len = strlen(va[i]);
        char r[101];
        for (int j = 0; j < len; ++j) {
            r[j] = va[i][len - j - 1];
        }
        r[len] = '\0';

        char fnd = 0;
        for (int j = 0; j < m; ++j) {
            if (strstr(vb[j], va[i]) || strstr(vb[j], r)) {
                fnd = 1;
                break;
            }
        }

        if (fnd) printf("Sheldon come a fruta %s\n", va[i]);
        else printf("Sheldon detesta a fruta %s\n", va[i]);
    }

    return 0;
}
