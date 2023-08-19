#include <stdio.h>

int s, k, h;

int main() {
    scanf("%d %d %d", &s, &k, &h);
    
    int sum = s+k+h;
    if (sum >= 100) {
        printf("OK\n");
    } else {
        if (s < k && s < h) {
            printf("Soongsil\n");
        } else if (k < s && k < h) {
            printf("Korea\n");
        } else {
            printf("Hanyang\n");
        }
    }
}
