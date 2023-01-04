#include <stdio.h>

int h,m,s,n;

int main() {
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &n);

    int tmp = 0;

    s += n;
    if (60 <= s) {
        m += (s/60);
        s -= (s/60 * 60);
        if (60 <= m) {
            tmp = m/60;
            m -= (m/60 * 60);
            h += tmp;
            if (24 <= h) h = (h%24); 
        }
    }

    printf("%d %d %d\n", h, m, s);
}
