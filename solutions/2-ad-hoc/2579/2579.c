#include <stdio.h>

int main() {
    int l, c, x, y;
    scanf("%d%d%d%d", &l, &c, &x, &y);
    printf("%s\n", ((x * c + y) & 1) ? "Esquerda" : "Direita");
    return 0;
}
