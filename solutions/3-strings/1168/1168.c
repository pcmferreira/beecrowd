#include <stdio.h>

int main() {
    int l[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n; scanf("%d", &n);
    while (n--) {
        char v[102]; scanf("%s", v);
        int ans = 0;
        for (int i = 0; v[i]; ++i) {
            ans += l[v[i] - '0'];
        }
        printf("%d leds\n", ans);
    }
    return 0;
}
