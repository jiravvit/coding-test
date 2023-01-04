#include <stdio.h>

int a, b, c;
int cola, cider;
int cheap_burger, cheap_drink;

int main() {
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &cola, &cider);
    
    cheap_drink = cola > cider ? cider : cola;

    cheap_burger = a > b ? b : a;
    cheap_burger = c > cheap_burger ? cheap_burger : c;

    printf("%d\n", cheap_drink + cheap_burger - 50);
    
}

