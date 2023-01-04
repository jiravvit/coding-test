#include <stdio.h>
#include <string.h>

char s[1000005];

int main() {
    /*int len = 0;*/
    /*int cnt = 0;*/
    /*for (int i = 0; i < 1000005; i++) {*/
        /*scanf("%c", &s[i]);*/
        /*if (s[i] == '\n') len = i;*/
        /*if (s[i] == ' ') cnt++;*/
    /*}*/

    scanf("%[^\n]s", s);

    int cnt = 0;
    for (int i = 1; i < strlen(s)-1; i++) {
        if (s[i] == ' ') cnt++;
        /*if (s[i] == '\t') cnt++;*/
    }

    if (strlen(s) == 1 && s[0] == ' ') printf("%d\n", 0);
    else printf("%d\n", cnt+1);

}
