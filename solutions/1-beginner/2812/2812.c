#include <stdio.h>
#include <stdlib.h>

int comp(const void *lptr, const void *rptr) {
    int l = *(int *) lptr;
    int r = *(int *) rptr;
    if (l == r) return 0;
    return (l < r) ? -1 : 1;
}

int main() {
    int n; scanf("%d", &n);
    int a[100];
    while (n--) {
        int m; scanf("%d", &m);
        int cnt = 0;
        for (int i = 0; i < m; ++i) {
            int x; scanf("%d", &x);
            if (x & 1) a[cnt++] = x;
        }
        qsort(a, cnt, sizeof (int), comp);
        for (int i = 0; i < cnt; ++i) {
            if (i) putchar(' ');
            printf("%d", (i & 1) ? a[i >> 1] : a[cnt - (i >> 1) - 1]);
        }
        putchar('\n');
    }
    return 0;
}
