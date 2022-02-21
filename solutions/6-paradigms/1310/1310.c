#include <stdio.h>
#include <math.h>

int main() {
    int n, c;
    int a[50];
    while (scanf("%d%d", &n, &c) != EOF) {
        for (int i = 0; i < n; ++i) {
            scanf("%d", a + i);
            a[i] -= c;
        }
        int s = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            s = (int) fmax(a[i], a[i] + s);
            ans = (int) fmax(ans, s);
        }
        printf("%d\n", ans);
    }
    return 0;
}
