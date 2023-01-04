#include <stdio.h>
#include <string.h>

char s[3];

int main() {
    scanf("%s", s);
    
    if (!strncmp(s, "A+", 2)) printf("4.3");
    else if (!strncmp(s, "A0", 2)) printf("4.0");
    else if (!strncmp(s, "A-", 2)) printf("3.7");
    
    else if (!strncmp(s, "B+", 2)) printf("3.3");
    else if (!strncmp(s, "B0", 2)) printf("3.0");
    else if (!strncmp(s, "B-", 2)) printf("2.7");

    else if (!strncmp(s, "C+", 2)) printf("2.3");
    else if (!strncmp(s, "C0", 2)) printf("2.0");
    else if (!strncmp(s, "C-", 2)) printf("1.7");

    else if (!strncmp(s, "D+", 2)) printf("1.3");
    else if (!strncmp(s, "D0", 2)) printf("1.0");
    else if (!strncmp(s, "D-", 2)) printf("0.7");

    else if (!strncmp(s, "F", 1)) printf("0.0");
    else return 0;

    return 0;
}
