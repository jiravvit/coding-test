#include <stdio.h>

int n, m;
int main() {
    scanf("%d %d", &n, &m);
    if (n >= m) {
        if (m == 1 || m == 2) 
            printf("NEWBIE!\n");
        else
           printf("OLDBIE!\n"); 
    } else {
            printf("TLE!\n");
    }
}
