#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    int ans = 0;
    int cnt = 0;

    while (cnt != n) {
        ans++;
        int tmp = ans;
        while (tmp != 0) {
            if (tmp % 1000 == 666) {
                cnt++;
                break;
            } else {
                tmp /= 10;
            }
        }
    }

    printf("%d\n", ans);
}

