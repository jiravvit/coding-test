#include <stdio.h>

char str[100];

int main() {
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

}