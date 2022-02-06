#include <stdio.h>

#define MAXN (100100)

int main() {
    int k; scanf("%d", &k);

    int fib[100] = {1, 1};

    char b_fib[MAXN] = {1, 1};

    for (int i = 2; 1; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (fib[i] >= MAXN) break;
        b_fib[fib[i]] = 1;
    }

    for (int i = 0; 1; ++i) {
        if (!b_fib[i]) {
            if (--k == 0) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
