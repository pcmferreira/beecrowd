#include <stdio.h>

int main() {
    char kb[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char x[128];
    x[10] = 10;
    x[32] = 32;
    for (int i = 1; kb[i]; ++i) {
        x[kb[i]] = kb[i - 1];
    }
    
    const int maxlen = 1e5;
    char s[maxlen];
    while (fgets(s, maxlen, stdin)) {
        for (int i = 0; s[i]; ++i) {
            s[i] = x[s[i]];
        }
        printf("%s", s);
    }
    return 0;
}
