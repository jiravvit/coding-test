#include <stdio.h>

int a, b, c;
int big, tmp;
int arr[3];

int main() {
    scanf("%d %d %d", &a, &b, &c);
    
    big = a;
    big = a > big ? a : big;
    big = b > big ? b : big;
    big = c > big ? c : big;

    arr[2] = big;
    /*printf("%d ", big);*/
    
    if (a == big) {
        tmp = b;
        tmp = c > tmp ? c : tmp;
    } else if (b == big) {
        tmp = a;
        tmp = c > tmp ? c : tmp;
    } else if (c == big) {
        tmp = a;
        tmp = b > tmp? b : tmp;
    }
    
    arr[1] = tmp;
    /*printf("%d ", tmp);*/

    if ((big==a && tmp==b) | (big==b && tmp==a)) arr[0] = c;
    else if ((big==a && tmp==c) | (big==c && tmp==a)) arr[0] = b;
    else arr[0] = a;
    
    /*if ((big==b && tmp==c) | (big==c && tmp==b)) printf("%d", a); */
    
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

}
