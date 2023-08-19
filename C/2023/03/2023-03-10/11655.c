#include <stdio.h>
#include <string.h>
char str[101];

int main() {
    scanf("%[^\n]s", str);
    
    for (int i = 0; i < strlen(str); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            if (str[i]+13 > 'Z') {
                printf("%c", str[i]+13-26);
            } else {
                printf("%c", str[i]+13);
            }
        } else if ('a' <= str[i] && str[i] <= 'z') {
            if (str[i]+13 > 'z') {
                printf("%c", str[i]+13-26);
            } else {
                printf("%c", str[i]+13);
            }
        } else {
            printf("%c", str[i]);
        } 
    }
}
