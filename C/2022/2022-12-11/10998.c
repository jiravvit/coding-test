#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    if(0 < a && b < 10) 
        printf("%d\n", a*b);

    return 0;
}
