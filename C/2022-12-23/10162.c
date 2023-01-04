#include <stdio.h>

int t,a,b,c;

int main() {
    scanf("%d", &t);
    

    if (60 <= t && t < 300) {
        if (t/60 == 0) {
            b = t/60;
        } else {
            b = t/60;
            c = (t-b*60)/10;
            if ((b*60 + c*10) == t) printf("0 %d %d\n", b, c);
            else printf("-1");
        }
    } else if (t < 60) {
        c = t/10;
        if (c*10 == t) printf("0 0 %d\n", c);
        else printf("-1");
    } else {
        // 300 < t;
        if (t/300 == 0) {
            a = t/300;
        } else {
            a = t/300;
            b = (t-a*300)/60;
            c = (t-a*300-b*60)/10;
            if ((a*300 + b*60 + c*10) == t) printf("%d %d %d\n", a, b, c);
            else printf("-1"); 
        }
    }

}
