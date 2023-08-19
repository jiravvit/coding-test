#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[8];
char b[8];
int max, min;

int main() {
    scanf("%s %s", a, b);

    int alen = strlen(a);
    int blen = strlen(b);

    for (int i = 0; i < alen; i++) {
        if (a[i] == '5') a[i] = '6';
    }
    for (int i = 0; i < blen; i++) {
        if (b[i] == '5') b[i] = '6';
    }
    max = atoi(a) + atoi(b);

    for (int i = 0; i < alen; i++) {
        if (a[i] == '6') a[i] = '5';
    }
    for (int i = 0; i < blen; i++) {
        if (b[i] == '6') b[i] = '5';
    }
    min = atoi(a) + atoi(b);

    printf("%d %d\n", min, max);
}
