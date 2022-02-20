#include <stdio.h>
#include <math.h>

int main() {
    int r1, x1, y1, r2, x2, y2;
    while (scanf("%d%d%d%d%d%d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
        double dx = x1 - x2;
        double dy = y1 - y2;
        double d = sqrt(dx * dx + dy * dy);
        printf("%s\n", d + r2 <= r1 ? "RICO" : "MORTO");
    }
    return 0;
}
