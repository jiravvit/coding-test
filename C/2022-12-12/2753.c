#include <stdio.h>

int main() {
    int y = 0;
    scanf("%d", &y);

    if ( (!(y%4) && (y%100)) || !(y%400) ) printf("1");
    else printf("0");

    return 0;

}
