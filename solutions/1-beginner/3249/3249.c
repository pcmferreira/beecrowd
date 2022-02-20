#include <stdio.h>
#include <string.h>

int main() {
    int n; scanf("%d", &n);
    char k[1001];
    int ans = 0;
    while (n--) {
        scanf("%s", k);
        ans += strstr(k, "CD") == NULL;
    }
    printf("%d\n", ans);
    return 0;
}
