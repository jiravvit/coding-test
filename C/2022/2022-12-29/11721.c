#include <stdio.h>
#include <string.h>

char s[102];

int main() {
    scanf("%100s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (!((i+1)%10)) printf("%c\n", s[i]);
        else printf("%c", s[i]);
    }
}
