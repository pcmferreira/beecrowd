#include <stdio.h>

int main() {
    double a, b; scanf("%lf%lf", &a, &b);
    double x = a + b + (a * b) / 100.0;
    printf("%.6f\n", x);
    return 0;
}
