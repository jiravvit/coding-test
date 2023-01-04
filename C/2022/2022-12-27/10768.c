#include <stdio.h>

int m, d;

int main() {
    scanf("%d\n%d", &m, &d);
    if (m < 2) printf("Before\n");
    else if (m==2 && d<17) printf("Before\n");
    else if (m==2 && d==18) printf("Special\n");
    else printf("After\n");
}
