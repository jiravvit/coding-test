#include <stdio.h>

int n, cnt0, cnt1;

int main() {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[n]);
        if (arr[n]) cnt1++;
        else cnt0++;
    }

    if (cnt0 < cnt1) printf("Junhee is cute!\n");
    else printf("Junhee is not cute!\n");
}
