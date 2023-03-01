#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char x[1000001];

int main() {
    scanf("%s", x);

    int len = strlen(x);
    /*printf("%d\n", len);*/
    
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += x[i] -'0';
    }
    
    /*printf("%d\n", sum);*/
    int xx = 0;
    if (len < 2) {
        xx = sum;
        printf("0\n");
    } else if (sum < 10) {
        xx = sum;
        printf("1\n");
    } else {
        int cnt = 1;
        while (sum >= 10) {
            int s = sum;
            int tmp = 0;
            while (s > 0) {
                tmp += s%10;
                s /= 10;
            }
            ++cnt;
            sum = tmp;
            xx = sum;
            /*printf("xx %d\n", xx);*/
        }       
        printf("%d\n", cnt);
    }

    /*int xx = atoi(x); */
    if (xx%3) printf("NO\n");
    else printf("YES\n");

}
