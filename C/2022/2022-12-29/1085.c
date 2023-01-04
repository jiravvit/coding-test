#include <stdio.h>
 
int x,y,w,h;
int a,b,c,d;
int main() {
    scanf("%d %d %d %d", &x, &y, &w, &h);
    a = w-x; // x
    b = h-y; // y
   
    int s = a < x ? a : x;
    int s2 = b < y ? b : y;

    if (s < s2) printf("%d\n", s);
    else printf("%d\n", s2);  
}
