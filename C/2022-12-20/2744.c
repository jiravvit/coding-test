#include <stdio.h>
#include <string.h>

char s[101];

int main() {
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        if (65 <= s[i] && s[i] <= 90) // A
            printf("%c", s[i] + (97-65));
        else if (97 <= s[i] && s[i] <= 122) // a
            printf("%c", s[i] - (97-65));
    }
}
