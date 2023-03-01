#include <stdio.h>

int k, a, d;

int main() {
    scanf("%d/%d/%d", &k, &d, &a);
    if ((k+a<d)||d==0) printf("hasu\n");
    else printf("gosu\n");
}
