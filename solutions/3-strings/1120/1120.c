#include <stdio.h>

int main() {
    char d, n[102];
    while (scanf(" %c %s", &d, n) && d != '0') {
        char ans[102], ans_len = 0;
        for (int i = 0; n[i]; ++i) {
            if (n[i] != d && (n[i] != '0' || ans_len)) ans[ans_len++] = n[i];
        }
        if (ans_len == 0) ans[ans_len++] = '0';
        ans[ans_len] = 0;
        printf("%s\n", ans);
    }
    return 0;
}
