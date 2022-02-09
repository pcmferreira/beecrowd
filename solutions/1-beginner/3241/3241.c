#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    while (n--) {
        char s[10];
        scanf("%s", s);
        if (s[0] == 'P') printf("skipped\n");
        else {
            int a, b;
            sscanf(s, "%d%*c%d", &a, &b);
            printf("%d\n", a + b);
        }
    }
    return 0;
}
