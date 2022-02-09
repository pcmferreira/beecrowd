#include <stdio.h>

int main() {
    int f[101] = {4, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
    f[20] = 6;
    f[30] = 6;
    f[40] = 5;
    f[50] = 5;
    f[60] = 5;
    f[70] = 7;
    f[80] = 6;
    f[90] = 6;
    f[100] = 11;
    for (int i = 20; i <= 90; i += 10) {
        for (int j = 1; j <= 9; ++j) {
            f[i + j] = f[i] + 1 + f[j];
        }
    }

    int x; scanf("%d", &x);

    for (int i = 0; i < 1000; ++i) {
        if (x == f[x]) break;
        x = f[x];
    }
    printf("%d\n", x);
    
    return 0;
}
